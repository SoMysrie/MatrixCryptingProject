#include <stdio.h>
#include <stdlib.h>

int main()
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

    do
    {
        askMatrix(tabMatrixAn);
    }while(verifMatrixNull(tabMatrixAn) == 0 || verifMatrixDuplicate(tabMatrixAn) == 0);

    displayMatrix(tabMatrixId);

    displayMatrix(tabMatrixAn);

    displayGenerator(tabMatrixId, tabMatrixAn, tabGenerator);


    return 0;
}
