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
    int answerCode, answerAgain;
    long lengthFile;

    do
    {
        askMatrix(tabMatrixAn);
    }while(verifMatrixNull(tabMatrixAn) == 0 || verifMatrixDuplicate(tabMatrixAn) == 0);

    displayMatrix(tabMatrixId);

    displayMatrix(tabMatrixAn);

    displayGenerator(tabMatrixId, tabMatrixAn, tabGenerator);

    lengthFile = sizeFile();

    do
    {
        choiceMatrix(&answerCode);
    }while(answerCode !=1 && answerCode != 2);



/*
    if (answerCode == 0)
        calculInGenerator(tabMatrixId, tabMatrixAn, tabGenerator);
    else
        calculOutGenerator(tabMatrixId, tabMatrixAn, tabGenerator);


/*
    do
    {
        choiceAgain(&answerAgain);
        if (answerAgain == 1)
        {

        }
        else
            break;
    }while(answerAgain != 1 && answerAgain != 2);
*/

    system("PAUSE");

    return 0;
}
