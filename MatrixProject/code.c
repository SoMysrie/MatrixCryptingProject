#include "header.h"

int choiceMatrix(int *choice)
{
    printf("\n\nPlease choose\n\n");
    printf("0. Encode.\n");
    printf("1. Decode.\n");
    scanf("%d", choice);
    printf("\n");
}

int calculInGenerator(int tab1[4][4], int tab2[4][4], int tab3[4][8])
{
    int i;
    int resultat;
    int U1[4], U2[4], U3[4], U4[4];
    int X1, X2, X3, X4;

    for(i=0; i<4; i++)
    {
        U1[i] = tab2[i][0];
        U2[i] = tab2[i][1];
        U3[i] = tab2[i][2];
        U4[i] = tab2[i][3];
    }

    X1 = U1 * tab3;
    X2 = U2 * tab3;
    X3 = U3 * tab3;
    X4 = U4 * tab3;

    return resultat;
}

void productMatrix(int tab1[4][4], int tab2[4][8], int tabfinal[4][8])
{
    int i, j, k;

    for (i=0; i<4; i++)
    {

    }
}

int calculOutGenerator(int tab1[4][4], int tab2[4][4], int tab3[4][8])
{

}
