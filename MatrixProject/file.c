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

long sizeFile()
{
    FILE* fichier = NULL;
    long taille;
    int answerFile;

    do
    {
        choiceFile(&answerFile);
        switch (answerFile)
        {
            case 1:
                fichier = fopen("test/testFile.txt", "rb");
                break;
            case 2:
                fichier = fopen("test/testPic.jpg", "rb");
                break;
            case 3:
                fichier = fopen("test/testMusic.mp3", "rb");
                break;
            case 4:
                fichier = fopen("test/testVideo.mp4", "rb");
                break;
            default:
                printf("\n\nError!\n\n");
                break;
        }

        if (fichier != NULL)
        {
            fseek (fichier, 0, SEEK_END);
            taille = ftell (fichier);
            printf("\n\nSize : %d\n\n", taille);
        }
        else
        {
            printf("\n\nError! Cannot open the file.\n\n");
            taille = 0;
        }

        fclose(fichier);

    }while(answerFile<1 || answerFile>4  || taille == 0);

    return taille;
}
