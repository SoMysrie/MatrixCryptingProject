#include <stdio.h>
#include <stdlib.h>

void displayMatrix(int tab[4][4]);
void askMatrix(int tab[4][4]);
void calculGenerator(int tab1[4][4], int tab2[4][4], int tab3[4][8]);

int main(int argc, char **argv)
{
    int tabMatrixId[4][4] =
    {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    int tabMatrixAn[4][4];
    int tabGenerator[4][8];

    askMatrix(tabMatrixAn);

    //affiche de la matrice par défaut
    printf("\n\nAffichage de la matrice:\n\n");
    displayMatrix(tabMatrixId);

    //affiche de la matrice entrée
    printf("\n\nAffichage de la matrice entree:\n\n");
    displayMatrix(tabMatrixAn);

    calculGenerator(tabMatrixId, tabMatrixAn, tabGenerator);

    return 0;
}

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
    int i, j;

    system("cls");

    //demande d'une seconde matrice
    printf("\n\nEntrez votre matrice binaire:\n");
    printf("(Entrez un 0 ou un 1.)\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            do
            {
                scanf("%d", &tab[i][j]);
            }while(tab[i][j]!=0 && tab[i][j]!=1);
       }
        printf("\n");
    }

    system("cls");
}

void calculGenerator(int tab1[4][4], int tab2 [4][4], int tab3[4][8])
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

    //affiche la matrice génératrice
    printf("\n\nAffichage de la matrice generatrice:\n\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<8; j++)
        {
            printf("%d ", tab3[i][j]);
        }
        printf("\n");
    }
}
