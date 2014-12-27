#include "header.h"

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

    //affichage de la matrice par d�faut
    printf("\n\nAffichage de la matrice:\n\n");
    displayMatrix(tabMatrixId);

    //affiche de la matrice entr�e
    printf("\n\nAffichage de la matrice entree:\n\n");
    displayMatrix(tabMatrixAn);

    //affiche la matrice g�n�ratrice
    printf("\n\nAffichage de la matrice generatrice:\n\n");
    displayGenerator(tabMatrixId, tabMatrixAn, tabGenerator);

    return 0;
}
