#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fichierSource = NULL;
    unsigned char octetActuel = 0;

    fichierSource = fopen("test/testFile.txt", "rb");

    if(fichierSource == NULL)
    {
        exit(1);
    }


    while( fread(&octetActuel, 1, sizeof(octetActuel), fichierSource) != 0)
    {
        printf("%02x\n", octetActuel);
    }


    fclose(fichierSource);

    return 0;
}
