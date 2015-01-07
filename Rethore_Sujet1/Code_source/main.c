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
        askMatrix(tabMatrixAn);
    }while(verifMatrixNull(tabMatrixAn) == 0 || verifMatrixDuplicate(tabMatrixAn) == 0);

    displayMatrix(tabMatrixId);

    displayMatrix(tabMatrixAn);

    displayGenerator(tabMatrixId, tabMatrixAn, tabGenerator);

    do
    {
        choiceMatrix(&answerCode);
    }while(answerCode !=1 && answerCode != 2);

    fichier = fopen(argv[1], "rb");

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

    if(answerCode==1)
    {
        temp = malloc(8 * sizeof(int));
        for(i = 0; i < (taille / 4); i++)
        {
            for(j = 0 ; j < 8 ; j++)
                temp[j] = 0;

            for(j = 0; j < 4 ; j++)
            {
                if(tabFile[(i * 4) + j] == 1)
                {
                    for(k = 0; k < 8; k++)
                    {
                        if(tabGenerator[j][k] == 1)
                            temp[k] = (temp[k] == 0) ? 1 : 0;
                    }
                }
            }

            for(j = 0; j < 8; j++)
            {
                tabChiffrer = realloc(tabChiffrer, ++length * sizeof(int));
                tabChiffrer[i*8+j] = temp[j];
            }
        }
        free(temp);
    }
    else
    {
        printf("La matrice pour dechiffrer n'est pas correcte.\n");
    }

    fichier = fopen("nouveauFichier", "wb");

    temp = malloc(8*sizeof(int));

    for(i=0; i<length; i+=8)
    {
        for(j=0; j<8; j++)
        {
            temp[j] = tabChiffrer[i*8+j];
        }
        octetActuel = calculOct(temp);
        fwrite(&octetActuel, sizeof(octetActuel), 1, fichier);
    }

    free(temp);

    if (fichier!=0 && answerCode==1)
        printf("\n\nNouveau fichier code a ete cree!\n\n");

    fclose(fichier);

    return 0;
}
