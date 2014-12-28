#include "header.h"

void displayMatrix(int tab[4][4])
{
    int i, j;

    printf("\n\nDisplay the matrix:\n\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            printf("%d ", tab[i][j]);
        printf("\n");
    }
}

void askMatrix(int tab[4][4])
{
    int i, j;

    printf("\n\nEnter your matrix:\n\n");
    printf("(0 || 1)\n\n");

    for(j=0; j<4; j++)
    {
        for(i=0; i<4; i++)
        {
            do
            {
                scanf("%d", &tab[i][j]);
                if (tab[i][j] != 0 && tab[i][j] != 1)
                    printf("nError! \n");
            }while(tab[i][j]!=0 && tab[i][j]!=1);
        }
        printf("\n");
    }
}

int verifMatrixNull(int tab[4][4])
{
    int i, j, cpt0, cpt1;
    int resultat = 1;

    for(j=0; j<4; j++)
    {
        cpt0 = 0;
        cpt1 = 0;

        for(i=0; i<4; i++)
        {
            if (tab[i][j] == 1)
                cpt1++;
            else if (tab[i][j] == 0)
                cpt0++;
        }

        if (cpt0 == 4)
        {
            printf("\n\nError!\nThere is at least one zero column. \n\n");
            resultat = 0;
            return resultat;
        }
        else if (cpt1 < 2)
        {
            printf("\n\nError!\nThere is at least one identical to that column of the identity matrix.\n\n");
            resultat = 0;
            return resultat;
        }
    }

    return resultat;
}

int verifMatrixDuplicate(int tab[4][4])
{
    int i, resultat = 1;
    int cpt1 = 0, cpt2 = 0, cpt3 = 0, cpt4 = 0, cpt5 = 0, cpt6 = 0;
    int tab_save0[4], tab_save1[4], tab_save2[4], tab_save3[4];

    for(i=0; i<4; i++)
    {
        tab_save0[i] = tab[i][0];
        tab_save1[i] = tab[i][1];
        tab_save2[i] = tab[i][2];
        tab_save3[i] = tab[i][3];

        if (tab_save0[i] == tab_save1[i])
            cpt1 ++;
        else if (tab_save0[i] == tab_save2[i])
            cpt2 ++;
        else if (tab_save0[i] == tab_save3[i])
            cpt3 ++;
        else if (tab_save1[i] == tab_save2[i])
            cpt4 ++;
        else if (tab_save1[i] == tab_save3[i])
            cpt5 ++;
        else if (tab_save2[i] == tab_save3[i])
            cpt6 ++;
    }

    if (cpt1 == 4 || cpt2 == 4 || cpt3 == 4 || cpt4 == 4 || cpt5 == 4 || cpt6 == 4)
    {
        resultat = 0;
        printf("\n\nError!\nThere are at least two identical columns.\n\n");
    }

    return resultat;
}

void displayGenerator(int tab1[4][4], int tab2 [4][4], int tab3[4][8])
{
    int i, j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            tab3[i][j] = tab1[i][j];
    }

    for(i=0; i<4; i++)
    {
        for(j=4; j<8; j++)
            tab3[i][j] = tab2[i][j-4];
    }

    printf("\n\nDisplay the generator Matrix:\n\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<8; j++)
            printf("%d ", tab3[i][j]);
        printf("\n");
    }
}
