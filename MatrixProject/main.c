#include <stdio.h>
#include <stdlib.h>

void displayMatrix(int tab[4][4]);
void askMatrix(int tab[4][4]);

int main(int argc, char **argv)
{
    int tab_matrix1[4][4] =
    {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    int tab_matrix2[4][4];

    askMatrix(tab_matrix2);

    //affiche de la matrice par défaut
    printf("\n\nAffichage de la matrice:\n\n");
    displayMatrix(tab_matrix1);

    //affiche de la matrice entrée
    printf("\n\nAffichage de la matrice entree:\n\n");
    displayMatrix(tab_matrix2);

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
