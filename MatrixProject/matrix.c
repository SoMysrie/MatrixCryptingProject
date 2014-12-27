#include "header.h"

void displayMatrix(int tab[4][4])
{
    int i, j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

void askMatrix(int tab[4][4])
{
    int i, j, cpt0 = 0, cpt1 = 0;

    system("cls");

    //demande d'une seconde matrice
    printf("\n\nEntrez votre matrice binaire:\n");
    printf("(Entrez un 0 ou un 1.)\n");

    for(j=0; j<4; j++)
    {
        cpt0 = 0;
        cpt1 = 0;

        for(i=0; i<4; i++)
        {
            do
            {
                scanf("%d", &tab[i][j]);
                if (tab[i][j] == 1)
                {
                    cpt1++;
                    printf("cpt1 = %d\n", cpt1);
                }
                else if (tab[i][j] == 0)
                {
                    cpt0++;
                    printf("cpt0 = %d\n", cpt0);
                }
                else
                    printf("Erreur! \n");
            }while(tab[i][j]!=0 && tab[i][j]!=1);
        }
        printf("\n");

        switch (cpt0)
        {
            case 0:
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                printf("La colonne existe deja. Veuillez en entrer une autre.\n");

                i = 0;
                cpt0 = 0;
                cpt1 = 0;

                do
                {
                    scanf("%d", &tab[i][j]);
                    i++;
                    if (tab[i][j] == 1)
                    {
                        cpt1++;
                        printf("cpt1 = %d\n", cpt1);
                    }
                    else if (tab[i][j] == 0)
                    {
                        cpt0++;
                        printf("cpt0 = %d\n", cpt0);
                    }
                    else
                        printf("Erreur! \n");
                }while(tab[i][j]!=0 && tab[i][j]!=1 && i < 4);
                break;

            case 4:
                printf("La colonne est nulle. Veuillez en entrer une autre.\n");

                i = 0;
                cpt0 = 0;
                cpt1 = 0;
                do
                {
                    scanf("%d", &tab[i][j]);
                    i++;
                    if (tab[i][j] == 1)
                    {
                        cpt1++;
                        printf("cpt1 = %d\n", cpt1);
                    }
                    else if (tab[i][j] == 0)
                    {
                        cpt0++;
                        printf("cpt0 = %d\n", cpt0);
                    }
                    else
                        printf("Erreur! \n");
                }while(tab[i][j]!=0 && tab[i][j]!=1 && i < 4);
                break;
            default:
                break;

        }
    }


    system("cls");
}

void displayGenerator(int tab1[4][4], int tab2 [4][4], int tab3[4][8])
{
    int i, j;

    //ajout de tab1 dans tab3
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            tab3[i][j] = tab1[i][j];
        }
    }

    //ajout de tab2 à la suite de tab1 dans tab3
    for(i=0; i<4; i++)
    {
        for(j=4; j<8; j++)
        {
            tab3[i][j] = tab2[i][j-4];
        }
    }


    for(i=0; i<4; i++)
    {
        for(j=0; j<8; j++)
        {
            printf("%d ", tab3[i][j]);
        }
        printf("\n");
    }
}
