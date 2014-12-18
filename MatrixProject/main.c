#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i, j;
    int tab_matrix[4][4] =
    {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };

    //
    printf("Affichage de la matrice:\n\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", tab_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
