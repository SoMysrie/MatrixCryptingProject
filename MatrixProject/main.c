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
    int answerCode, answerFile;
    long lengthFile;

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

    //choisir le fichier
    do
    {
        choiceFile(&answerFile);
        switch (answerFile)
        {
            case 1:
                lengthFile = sizeFileTxt();
                break;
            case 2:
                lengthFile = sizeFilePic();
                break;
            case 3:
                lengthFile = sizeFileMusic();
            case 4:
                lengthFile = sizeFileVideo();
            default:
                printf("\n\nError!\n\n");
        }
    }while(answerFile<1 || answerFile>4)




    //choisir de coder ou décoder
    do
    {
        choiceMatrix(&answerCode);
    }while(answerCode !=0 && answerCode != 1);


    //calcul de la matrice generatrice
    if (answerCode == 0)
        calculInGenerator(tabMatrixId, tabMatrixAn, tabGenerator);
    else
        calculOutGenerator(tabMatrixId, tabMatrixAn, tabGenerator);


    system("PAUSE");

    return 0;
}
