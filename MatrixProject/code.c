#include "header.h"

int choiceMatrix(int *choice)
{
    printf("\n\nPlease choose\n\n");
    printf("1. Encode.\n");
    printf("2. Decode.\n");
    scanf("%d", choice);
    printf("\n\n");
}

int calculInGenerator(int tab1[4][4], int tab2[4][4], int tab3[4][8])
{

}

int calculOutGenerator(int tab1[4][4], int tab2[4][4], int tab3[4][8])
{

}

void productMatrix(int tab1[4][4], int tab2[4][4], int tabfinal[4][8])
{
    int i, j, k;

    for(i=0; i<4; i++)
    {
        for(j=0; j<8; j++)
        {
            tabfinal[i][j] = 0;
            for(k=0; k<4; k++)
                tabfinal[i][j] += tab1[i][k] * tab2[k][j];
        }
    }
}

