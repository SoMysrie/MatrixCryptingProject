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
    int *tabFile;
    int answerCode, answerAgain, answerFile;
    FILE *fichier = NULL;
    int taille=0, i=0;
    char octetActuel = 0;

    do
    {
        askMatrix(tabMatrixAn);
    }while(verifMatrixNull(tabMatrixAn) == 0 || verifMatrixDuplicate(tabMatrixAn) == 0);

    displayMatrix(tabMatrixId);

    displayMatrix(tabMatrixAn);

    displayGenerator(tabMatrixId, tabMatrixAn, tabGenerator);

    do
    {
        choiceMatrix(&answerCode);
    }while(answerCode !=1 && answerCode != 2);

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

                fseek(fichier, 0, SEEK_SET);
                tabFile = malloc(taille * sizeof(int));

                while( fread(&tabFile[i], 1, sizeof(octetActuel), fichier) != 0)
                {
                    calculBin(tabFile[i]);
                    i++;
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

                fseek(fichier, 0, SEEK_SET);
                tabFile = malloc(taille * sizeof(int));

                while( fread(&tabFile[i], 1, sizeof(octetActuel), fichier) != 0)
                {
                    calculBin(tabFile[i]);
                    i++;
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

                fseek(fichier, 0, SEEK_SET);
                tabFile = malloc(taille * sizeof(int));

                while( fread(&tabFile[i], 1, sizeof(octetActuel), fichier) != 0)
                {
                    calculBin(tabFile[i]);
                    i++;
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

                fseek(fichier, 0, SEEK_SET);
                tabFile = malloc(taille * sizeof(int));

                while( fread(&tabFile[i], 1, sizeof(octetActuel), fichier) != 0)
                {
                    calculBin(tabFile[i]);
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
