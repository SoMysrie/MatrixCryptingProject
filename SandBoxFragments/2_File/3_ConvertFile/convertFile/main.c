#include "header.h"

int main()
{
    FILE *fichier = NULL;
    int answerFile;
    int taille=0, i=0, j=0, decimal=0, binary=2;
    char octetActuel = 0;
    int *tab;

    do
    {
        choiceFile(&answerFile);
        switch (answerFile)
        {
            case 1:
                fichier = fopen("test/testFile.txt", "rb");
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
                fseek(fichier, 0, SEEK_SET);
                tab = malloc(taille * sizeof(int));

                while( fread(&tab[i], 1, sizeof(octetActuel), fichier) != 0)
                {
                    printf("Hexa:    %02x\n", tab[i]);
                    printf("Deci:    %d\n", tab[i]);
                    printf("Binary:  ");
                    affBin(tab[i]);
                    printf("\n\n");
                    i++;
                }
                break;
            case 2:
                fichier = fopen("test/testPic.jpg", "rb");
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
                fseek(fichier, 0, SEEK_SET);
                tab = malloc(taille * sizeof(int));

                while( fread(&tab[i], 1, sizeof(octetActuel), fichier) != 0)
                {
                    printf("Hexa:    %02x\n", tab[i]);
                    printf("Deci:    %d\n", tab[i]);
                    printf("Binary:  ");
                    affBin(tab[i]);
                    printf("\n\n");
                    i++;
                }
                break;
            case 3:
                fichier = fopen("test/testMusic.mp3", "rb");
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
                fseek(fichier, 0, SEEK_SET);
                tab = malloc(taille * sizeof(int));

                while( fread(&tab[i], 1, sizeof(octetActuel), fichier) != 0)
                {
                    printf("Hexa:    %02x\n", tab[i]);
                    printf("Deci:    %d\n", tab[i]);
                    printf("Binary:  ");
                    affBin(tab[i]);
                    printf("\n\n");
                    i++;
                }
                break;
            case 4:
                fichier = fopen("test/testVideo.mp4", "rb");
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
                fseek(fichier, 0, SEEK_SET);
                tab = malloc(taille * sizeof(int));

                while( fread(&tab[i], 1, sizeof(octetActuel), fichier) != 0)
                {
                    printf("Hexa:    %02x\n", tab[i]);
                    printf("Deci:    %d\n", tab[i]);
                    printf("Binary:  ");
                    affBin(tab[i]);
                    printf("\n\n");
                    i++;
                }
                break;
            default:
                printf("\n\nError!\n\n");
                break;
        }
    }while(answerFile<1 || answerFile>4  || taille == 0);

    fclose(fichier);

    return 0;
}
