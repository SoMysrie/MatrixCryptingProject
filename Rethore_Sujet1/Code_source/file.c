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

int *calculBin(char d)
{
    int i;
    int *tabBits = malloc(8*sizeof(int));

    for(i=7; i==0; i--)
        tabBits[7-i] = (d & (1<<i)) ? 1 : 0;

    return tabBits;
}

int calculOct(int *tab)
{
    char c, temp[9];
    int rem, k=0, n;

    sprintf(temp, "%d%d%d%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7]);
    n = atoi(temp);

    while(n!=0)
    {
        rem = n%10;
        n/=10;
        c += rem*pow(2, k);
        k++;
    }

    return c;
}
