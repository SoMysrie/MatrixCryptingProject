#include "header.h"

void choiceFile(int *choice)
{
    printf("\n\nPlease choose a file\n\n");
    printf("1. Text.\n");
    printf("2. Picture.\n");
    printf("3. Music.\n");
    printf("4. Video.\n");
    scanf("%d", choice);
    printf("\n\n");
}

void choiceAgain(int *choice)
{
    printf("\n\nDo you want to choose another file?\n\n");
    printf("1. Yes.\n");
    printf("2. No.\n");
    scanf("%d", choice);
    printf("\n\n");
}

void calculBin(int d){
    if (d > 1)
    {
        calculBin(d/2);
        d=d%2;
    }
}
