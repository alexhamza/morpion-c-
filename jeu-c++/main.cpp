#include <iostream>
#include <windows.h>        //system cls
#include <time.h>           // pour rand
#include <stdio.h>          // pour Slepp
#include "conio.h"          // couleur
using namespace std;
int main()
{
    // mettre un if pour recommencer si le jeu est fini           // si la condition est juste alors on lance une nouvelle partie
    char tab[3][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}};    //declare les variables
    long lig,col,v;
    long tour;
    long r;
    srand(time (NULL));
    r = 1;
    v!=1;                                                 // pour recommencer une nouvelle partie
        int restart = 1;                                          // permet de recommencer le programme si il y a un gagnan, un perdant ou match nul
        while (restart)
        {
            for (lig = 0; lig < 3 ; lig++)                            //initialisation du tableau
            {
                for ( col = 0; col < 3; col++)
                    {
                    tab[lig][col]= ' ';
                    }
            }
    tour=-1;
    tour=tour++;
    cout << "       Bienvenue dans Tic-Tac-Toe \n" <<endl;
    cout << "         1     2     3  \n";
    cout << "      |     |     |     | \n";
    cout << "     1" << "|  " << tab[0][0] << "  |  " << tab[0][1] << "  |  " << tab[0][2] <<"  |" << "     Tour :" << tour << "\n";
    cout << "      |_____|_____|_____|\n";
    cout << "      |     |     |     |\n";
    cout << "     2"<< "|  " << tab[1][0] << "  |  " << tab[1][1] << "  |  " << tab[1][2] <<"  |\n";
    cout << "      |_____|_____|_____|\n";
    cout << "      |     |     |     |\n";
    cout << "     3" << "|  " << tab[2][0] << "  |  " << tab[2][1] << "  |  " << tab[2][2] <<"  |\n";
    cout << "      |     |     |     |\n";
   do                       // Joueur a jouer 1
   {
        do
        {
            cout<<"Saisir la ligne: "<<endl;
            cin>>lig;
            cout<<"Saisir la colonne: "<<endl;
            cin>>col;
        }while((lig>3 && lig<1)||(col>3 && col<1));            //recommencer tant que la condition est juste
        }while (tab[lig-1][col-1] != ' ');
    tab[lig-1][col-1]='X';
    for(lig=0; lig<=3; lig++)
      {
        if( (tab[lig-1][0]==tab[lig-1][1]) && (tab[lig-1][1]==tab[lig-1][2]) )
        {
            cout<<"gagne !"<<endl;
        }
       }
      for (col=0; col<=3; col++)
      {
          if ((tab[0][col-1]==tab[1][col-1]) && (tab[1][col-1]==tab[2][col-1]))
          {
           cout << "gagne "<<endl;
          }
      }
    tour=tour++;
    cout << "         1     2     3     \n";
    cout << "      |     |     |     | \n";
    cout << "     1" << "|  " << tab[0][0] << "  |  " << tab[0][1] << "  |  " << tab[0][2] <<"  |" << "     Tour :" << tour << "\n";
    cout << "      |_____|_____|_____|\n";
    cout << "      |     |     |     |\n";
    cout << "     2"<< "|  " << tab[1][0] << "  |  " << tab[1][1] << "  |  " << tab[1][2] <<"  |\n";
    cout << "      |_____|_____|_____|\n";
    cout << "      |     |     |     |\n";
    cout << "     3" << "|  " << tab[2][0] << "  |  " << tab[2][1] << "  |  " << tab[2][2] <<"  |\n";
    cout << "      |_____|_____|_____|\n";
    cout << " \n";
    cout << "patience, c'est au tour de l'ordi" <<endl;
    cout << " \n";
    Sleep(2000);            // temps en millisecondes soit 2s
    do
    {
    lig = rand()%3;     // valeur aleatoire jouer par l'ordi
    col = rand()%3;
    }while ( tab[lig][col]=='X' || tab[lig][col]=='O'); //test
    tab[lig][col]='O';
      for(lig=0; lig<=3; lig++) // test2
      {
        if( (tab[lig-1][0]==tab[lig-1][1]) && (tab[lig-1][1]==tab[lig-1][2]) )
        {
            v=1;
            cout<<"gagne !"<<endl;
        }
       }
      for (col=0; col<=3; col++)
      {
          if ((tab[0][col-1]==tab[1][col-1]) && (tab[1][col-1]==tab[2][col-1]))
          {
           cout << "gagne "<<endl;
          }
      }
    tour=tour++;
    cout << "         1     2     3  \n";
    cout << "           |     |     | \n";
    cout << "     1" << "|  " << tab[0][0] << " |  " << tab[0][1] << "  |  " << tab[0][2] <<"   |" << "     Tour :" << tour << "\n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     2"<< "|  " << tab[1][0] << " |  " << tab[1][1] << "  |  " << tab[1][2] <<"   \n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     3" << "|  " << tab[2][0] << " |  " << tab[2][1] << "  |  " << tab[2][2] <<"   \n";
    cout << "           |     |     |\n";
    do                          // joueur a jouer 2
    {
        do
        {
           cout<<"Saisir la ligne: "<<endl;
            cin>>lig;
            cout<<"Saisir la colonne: "<<endl;
            cin>>col;
        }while ((lig>3 && lig<1)||(col>3 && col<1));            //recommencer tant que la condition est juste
        }while (tab[lig-1][col-1] != ' ');                      //saisie sécureiser pour les lignes et colonnes
    tab[lig-1][col-1]='X';
    tour=tour++;
    cout << "         1     2     3  \n";
    cout << "           |     |     | \n";
    cout << "     1" << "|  " << tab[0][0] << " |  " << tab[0][1] << "  |  " << tab[0][2] <<"   |" << "     Tour :" << tour << "\n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     2"<< "|  " << tab[1][0] << " |  " << tab[1][1] << "  |  " << tab[1][2] <<"   \n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     3" << "|  " << tab[2][0] << " |  " << tab[2][1] << "  |  " << tab[2][2] <<"   \n";
    cout << "           |     |     |\n";
    cout << " \n";
    cout << "patience, c'est au tour de l'ordi" <<endl;
    cout << " \n";
    Sleep(2000);
    do
    {
    lig = rand()%3;
    col = rand()%3;
    }while ( tab[lig][col]=='X' || tab[lig][col]=='O'); //test
    tab[lig][col]='O';
     for(lig=0; lig<=3; lig++) // test2
      {
        if( (tab[lig-1][0]==tab[lig-1][1]) && (tab[lig-1][1]==tab[lig-1][2]) )
        {
           cout<<"gagne !";
        }
       }
      for (col=0; col<=3; col++)
      {
          if ((tab[0][col-1]==tab[1][col-1]) && (tab[1][col-1]==tab[2][col-1]))
          {
           cout << "gagne "<<endl;
          }
      }
    tour=tour++;
    cout << "         1     2     3  \n";
    cout << "           |     |     | \n";
    cout << "     1" << "|  " << tab[0][0] << " |  " << tab[0][1] << "  |  " << tab[0][2] <<"   |" << "     Tour :" << tour << "\n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     2"<< "|  " << tab[1][0] << " |  " << tab[1][1] << "  |  " << tab[1][2] <<"   \n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     3" << "|  " << tab[2][0] << " |  " << tab[2][1] << "  |  " << tab[2][2] <<"   \n";
    cout << "           |     |     |\n";
        do                      // Joueur a joue 3
        {
            do
            {
                cout<<"Saisir la ligne: "<<endl;        //saisie sécuriser pour les lignes et les colonnes
                cin>>lig;
                cout<<"Saisir la colonne: "<<endl;
                cin>>col;
            }while ((lig>3 && lig<1)||(col>3 && col<1));            //recommencer tant que la condition est juste
        }while (tab[lig-1][col-1] != ' ');
    tab[lig-1][col-1]='X';
    tour=tour++;
    cout << "         1     2     3  \n";
    cout << "           |     |     | \n";
    cout << "     1" << "|  " << tab[0][0] << " |  " << tab[0][1] << "  |  " << tab[0][2] <<"   |" << "     Tour :" << tour << "\n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     2"<< "|  " << tab[1][0] << " |  " << tab[1][1] << "  |  " << tab[1][2] <<"   \n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     3" << "|  " << tab[2][0] << " |  " << tab[2][1] << "  |  " << tab[2][2] <<"   \n";
    cout << "           |     |     |\n";
    cout << " \n";
    cout << "patience, c'est au tour de l'ordi" <<endl;
    cout << " \n";
    Sleep(2000);
    do
    {
    lig = rand()%3;
    col = rand()%3;
    }while ( tab[lig][col]=='X' || tab[lig][col]=='O'); //test
    tab[lig][col]='O';
      for(lig=0; lig<=3; lig++) // test2
      {
        if( (tab[lig-1][0]==tab[lig-1][1]) && (tab[lig-1][1]==tab[lig-1][2]) )
        {
            cout<<"gagne !"<<endl;
        }
       }
      for (col=0; col<=3; col++)
      {
          if ((tab[0][col-1]==tab[1][col-1]) && (tab[1][col-1]==tab[2][col-1]))
          {
           cout << "gagne "<<endl;
          }
      }
    tour=tour++;
    cout << "         1     2     3  \n";
    cout << "           |     |     | \n";
    cout << "     1" << "|  " << tab[0][0] << " |  " << tab[0][1] << "  |  " << tab[0][2] <<"   |"  << "     Tour :" << tour << "\n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     2"<< "|  " << tab[1][0] << " |  " << tab[1][1] << "  |  " << tab[1][2] <<"   |\n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     3" << "|  " << tab[2][0] << " |  " << tab[2][1] << "  |  " << tab[2][2] <<"   |\n";
    cout << "           |     |     |\n";
     do                      // Joueur a joue 4
        {
            do
            {
                cout<<"Saisir la ligne: "<<endl;        //saisie sécuriser pour les lignes et les colonnes
                cin>>lig;
                cout<<"Saisir la colonne: "<<endl;
                cin>>col;
            }while ((lig>=3 && lig<=1)||(col>=3 && col<=1));            //recommencer tant que la condition est juste
        }while (tab[lig-1][col-1] != ' ');
    tab[lig-1][col-1]='X';
    tour=tour++;
    cout << "         1     2     3  \n";
    cout << "           |     |     | \n";
    cout << "     1" << "|  " << tab[0][0] << " |  " << tab[0][1] << "  |  " << tab[0][2] <<"   |" << "     Tour :" << tour << "\n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     2"<< "|  " << tab[1][0] << " |  " << tab[1][1] << "  |  " << tab[1][2] <<"   |\n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     3" << "|  " << tab[2][0] << " |  " << tab[2][1] << "  |  " << tab[2][2] <<"   |\n";
    cout << "           |     |     |\n";
    cout << " \n";
    cout << "patience, c'est au tour de l'ordi" <<endl;
    cout << " \n";
    Sleep(2000);
    do
    {
    lig = rand()%3;
    col = rand()%3;
    }while ( tab[lig][col]=='X' || tab[lig][col]=='O'); //test
    tab[lig][col]='O';
     for(lig=0; lig<=3; lig++) // test2
      {
        if( (tab[lig-1][0]==tab[lig-1][1]) && (tab[lig-1][1]==tab[lig-1][2]) )
        {
            cout<<"gagne !"<<endl;
        }
       }
      for (col=0; col<=3; col++)
      {
          if ((tab[0][col-1]==tab[1][col-1]) && (tab[1][col-1]==tab[2][col-1]))
          {
           cout << "gagne "<<endl;
          }
      }
    cout << "         1     2     3  \n";
    cout << "           |     |     | \n";
    cout << "     1" << "|  " << tab[0][0] << " |  " << tab[0][1] << "  |  " << tab[0][2] <<"   |" << "     Tour :" << tour << "\n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     2"<< "|  " << tab[1][0] << " |  " << tab[1][1] << "  |  " << tab[1][2] <<"   |\n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     3" << "|  " << tab[2][0] << " |  " << tab[2][1] << "  |  " << tab[2][2] <<"   |\n";
    cout << "           |     |     |\n";
     do                      // Joueur a joue 5
        {
            do
            {
                cout<<"Saisir la ligne: "<<endl;        //saisie sécuriser pour les lignes et les colonnes
                cin>>lig;
                cout<<"Saisir la colonne: "<<endl;
                cin>>col;
            }while ((lig>3 && lig<1)||(col>3 && col<1));            //recommencer tant que la condition est juste
        }while (tab[lig-1][col-1] != ' ');
    tab[lig-1][col-1]='X';
    tour=tour++;
    cout << "         1     2     3  \n";
    cout << "           |     |     | \n";
    cout << "     1" << "|  " << tab[0][0] << " |  " << tab[0][1] << "  |  " << tab[0][2] <<"   |" << "     Tour :" << tour << "\n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     2"<< "|  " << tab[1][0] << " |  " << tab[1][1] << "  |  " << tab[1][2] <<"   \n";
    cout << "      _____|_____|_____|\n";
    cout << "           |     |     |\n";
    cout << "     3" << "|  " << tab[2][0] << " |  " << tab[2][1] << "  |  " << tab[2][2] <<"   \n";
    cout << "           |     |     |\n";
    cout << " \n";
      for(lig=0; lig<=3; lig++) // test2
      {
        if( (tab[lig-1][0]==tab[lig-1][1]) && (tab[lig-1][1]==tab[lig-1][2]) )
        {
            cout<<"gagne !"<<endl;
        }
      }
      for (col=0; col<=3; col++)
      {
          if ((tab[0][col-1]==tab[1][col-1]) && (tab[1][col-1]==tab[2][col-1]))
          {
           cout << "gagne "<<endl;
          }
      }
    if (r=1)
    {
    cout << " voulez vous recommencer une nouvelle partie ? Si oui appuyer une 1 " <<endl;
    cin >> r;
    system("cls" );          // efface tous apres le dernier jeu du joueur
    }
            } // restart
    // mettre } pour if           // if
// do
    return 0;
}
