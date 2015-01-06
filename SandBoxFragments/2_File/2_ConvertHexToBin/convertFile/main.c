#include "header.h"

int main()
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
