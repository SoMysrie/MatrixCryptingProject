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

long sizeFileTxt()
{
    FILE* fichier = NULL;
    long taille;

    fichier = fopen("test/testFile.txt", "rb");

    if (fichier != NULL)
    {
        fseek (fichier, 0, SEEK_END);
        taille = ftell (fichier);
        printf("\n\nTaille : %d bits\n\n", taille*8);
    }
    else
        printf("\n\nImpossible d'ouvrir le fichier test\n\n");

    fclose(fichier);

    return taille;
}

long sizeFilePic()
{
    FILE* fichier = NULL;
    long taille;

    fichier = fopen("test/testPic.jpeg", "rb");

    if (fichier != NULL)
    {
        fseek (fichier, 0, SEEK_END);
        taille = ftell (fichier);
        printf("\n\nTaille : %d bits\n\n", taille*8);
    }
    else
        printf("\n\nImpossible d'ouvrir le fichier test\n\n");

    fclose(fichier);

    return taille;
}

long sizeFileMusic()
{
    FILE* fichier = NULL;
    long taille;

    fichier = fopen("test/testMusic.mp3", "rb");

    if (fichier != NULL)
    {
        fseek (fichier, 0, SEEK_END);
        taille = ftell (fichier);
        printf("\n\nTaille : %d bits\n\n", taille*8);
    }
    else
        printf("\n\nImpossible d'ouvrir le fichier test\n\n");

    fclose(fichier);

    return taille;
}

long sizeFileVid()
{
    FILE* fichier = NULL;
    long taille;

    fichier = fopen("test/testVideo.", "rb");

    if (fichier != NULL)
    {
        fseek (fichier, 0, SEEK_END);
        taille = ftell (fichier);
        printf("\n\nTaille : %d bits\n\n", taille*8);
    }
    else
        printf("\n\nImpossible d'ouvrir le fichier test\n\n");

    fclose(fichier);

    return taille;
}

