#include "header.h"

int main(int argc, char **argv)
{
    int tabMatrixId[4][4] =
    {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    int tabMatrixAn[4][4];
    int tabGenerator[4][8];
    int *tabFile, *tabOctect, *tabChiffrer = NULL, *temp = NULL;
    int answerCode, answerFile;
    FILE *fichier = NULL;
    int taille=0, length=0, i=0, j=0, k=0;
    char octetActuel = 0;

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
                }
                else
                {
                    printf("\n\nError! Cannot open the file.\n\n");
                    exit(1);
                }
                break;
            case 2:
                fichier = fopen("test/testPic.jpg", "rb");
                if (fichier != NULL)
                {
                    fseek (fichier, 0, SEEK_END);
                    taille = ftell (fichier);
                }
                else
                {
                    printf("\n\nError! Cannot open the file.\n\n");
                    exit(1);
                }
                break;
            case 3:
                fichier = fopen("test/testMusic.mp3", "rb");
                if (fichier != NULL)
                {
                    fseek (fichier, 0, SEEK_END);
                    taille = ftell (fichier);
                }
                else
                {
                    printf("\n\nError! Cannot open the file.\n\n");
                    exit(1);
                }
                break;
            case 4:
                fichier = fopen("test/testVideo.mp4", "rb");
                if (fichier != NULL)
                {
                    fseek (fichier, 0, SEEK_END);
                    taille = ftell (fichier);
                }
                else
                {
                    printf("\n\nError! Cannot open the file.\n\n");
                    exit(1);
                }
                break;
            default:
                printf("\n\nError!\n\n");
                break;
        }

        fseek(fichier, 0, SEEK_SET);
        tabFile = malloc(8 * taille * sizeof(int));

        while(fread(&octetActuel, sizeof(octetActuel), 1, fichier) != 0)
        {
            tabOctect = calculBin(octetActuel);
            for(j=0; j<8; j++)
            {
                tabFile[i*8+j]=tabOctect[j];
            }
            i++;
            free(tabOctect);
        }
        fclose(fichier);
    }while(answerFile<1 || answerFile>4  || taille == 0);



    system("PAUSE");

    return 0;
}
