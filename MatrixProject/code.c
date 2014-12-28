#include "header.h"

int choiceMatrix(int *choice)
{
    do
    {
        printf("\n\nPlease choose\n\n");
        printf("1. Encode.\n");
        printf("2. Decode.\n");
        scanf("%d", choice);
        printf("\n");
    }while(choice !=1 && choice != 2);
}

void calculGenerator(int tab[4][8])
{

}

