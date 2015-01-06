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

int octByOct(FILE *fichier)
{
    unsigned char octetActuel = 0;
    unsigned char result = 0;

    while( fread(&octetActuel, 1, sizeof(octetActuel), fichier) != 0)
    {
        printf("%02x\n", octetActuel);
    }

    return result;
}

int convert()
{
    char hex[20],c;
    int n;
    printf("Instructions:\n");
    printf("Enter h to convert binary to hexadecimal:\n");
    printf("Enter b to hexadecimal number to binary:\n");
    printf("Enter a character: ");
    scanf("%c",&c);
    if (c=='h' || c=='H')
    {
        printf("Enter binary number: ");
        scanf("%d",&n);
        binary_hex(n,hex);
        printf("Hexadecimal number: %s",hex);
    }
    if (c=='b' || c=='B')
    {
        printf("Enter hexadecimal number: ");
        scanf("%s",hex);
        printf("Binary number: %d",hex_binary(hex));
    }
    return 0;
}

void binary_hex(int n, char hex[]) /* Function to convert binary to hexadecimal. */
{
    int i=0,decimal=0, rem;
    while (n!=0)
    {
        decimal += (n%10)*pow(2,i);
        n/=10;
        ++i;
    }

/* At this point, variable decimal contains binary number in decimal format. */
    i=0;
    while (decimal!=0)
    {
        rem=decimal%16;
        switch(rem)
        {
            case 10:
              hex[i]='A';
              break;
            case 11:
              hex[i]='B';
              break;
            case 12:
              hex[i]='C';
              break;
            case 13:
              hex[i]='D';
              break;
            case 14:
              hex[i]='E';
              break;
            case 15:
              hex[i]='F';
              break;
            default:
              hex[i]=rem+'0';
              break;
        }
        ++i;
        decimal/=16;
    }
    hex[i]='\0';
    strrev(hex);       /* Function to reverse string. */
}

int hex_binary(char hex[])   /* Function to convert hexadecimal to binary. */
{
    int i, length, decimal=0, binary=0;
    for(length=0; hex[length]!='\0'; ++length);
    for(i=0; hex[i]!='\0'; ++i, --length)
    {
        if(hex[i]>='0' && hex[i]<='9')
            decimal+=(hex[i]-'0')*pow(16,length-1);
        if(hex[i]>='A' && hex[i]<='F')
            decimal+=(hex[i]-55)*pow(16,length-1);
        if(hex[i]>='a' && hex[i]<='f')
            decimal+=(hex[i]-87)*pow(16,length-1);
    }
/* At this point, variable decimal contains the hexadecimal number in decimal format. */

    i=1;
    while (decimal!=0)
    {
        binary+=(decimal%2)*i;
        decimal/=2;
        i*=10;
    }
    return binary;
}

int read_n_int(int* t,unsigned int n,FILE* f)
{
  int i;
  i = fread(t,n,sizeof(int),f);

  return (i!=0);
}

void affBin(int d){
    if (d > 1)
    {
        affBin(d/2);
        printf("%d", d%2);
    }
    /*else
        printf("0b1");
        */
}
