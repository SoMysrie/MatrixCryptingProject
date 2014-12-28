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
    int aChoice;

    //boucle au moins une fois sur la matrice entrée
    do
    {
        //demande de la matrice
        askMatrix(tabMatrixAn);
    }while(verifMatrixNull(tabMatrixAn) == 0 || verifMatrixDuplicate(tabMatrixAn) == 0);

    //affichage de la matrice par défaut
    displayMatrix(tabMatrixId);

    //affichage de la matrice entrée
    displayMatrix(tabMatrixAn);

    //affichage de la matrice génératrice
    displayGenerator(tabMatrixId, tabMatrixAn, tabGenerator);

    //choisir de coder ou décoder
    choiceMatrix(&aChoice);

    //calcul de la matrice génératrice
    //printf("\n\nAffichage du calcul de la matrice generatrice:\n\n");
    //calculGenerator(tabGenerator);

    //selection d'un fichier
    //printf("\n\nVeuillez choisir un fichier:\n\n");

    //chemin de l'enregistrement du fichier
    //printf("\n\nVeuillez choisir ou enregistrer:\n\n");

    //nouveau nom du fichier
    //printf("\n\nVeuillez choisir le nouveau nom du fichier:\n\n");

    system("PAUSE");

    return 0;
}
