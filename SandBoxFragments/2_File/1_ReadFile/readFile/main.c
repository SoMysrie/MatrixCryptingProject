#include "header.h"

int main()
{
    FILE *fichier = NULL;
    int answerFile;
    int taille;
    unsigned char octetActuel = 0;

    do
    {
        choiceFile(&answerFile);
        switch (answerFile)
        {
            case 1:
                fichier = fopen("test/testFile.txt", "rb");
                while( fread(&octetActuel, 1, sizeof(octetActuel), fichier) != 0)
                {
                    printf("%02x\n", octetActuel);
                }
                break;
            case 2:
                fichier = fopen("test/testPic.jpg", "rb");
                while( fread(&octetActuel, 1, sizeof(octetActuel), fichier) != 0)
                {
                    printf("%02x\n", octetActuel);
                }
                break;
            case 3:
                fichier = fopen("test/testMusic.mp3", "rb");
                while( fread(&octetActuel, 1, sizeof(octetActuel), fichier) != 0)
                {
                    printf("%02x\n", octetActuel);
                }
                break;
            case 4:
                fichier = fopen("test/testVideo.mp4", "rb");
                while( fread(&octetActuel, 1, sizeof(octetActuel), fichier) != 0)
                {
                    printf("%02x\n", octetActuel);
                }
                break;
            default:
                printf("\n\nError!\n\n");
                break;
        }

        if (fichier != NULL)
        {
            fseek (fichier, 0, SEEK_END);
            taille = ftell (fichier);
            printf("\n\nSize : %d octets\n\n", taille);
        }
        else
        {
            printf("\n\nError! Cannot open the file.\n\n");
            exit(1);
        }
    }while(answerFile<1 || answerFile>4  || taille == 0);

    fclose(fichier);

    return 0;
}
