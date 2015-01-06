#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>

#define N 10

void    choiceFile      (int *choice);
void    choiceAgain     (int *choice);
int     octByOct        (FILE *fichier);
int     convert         ();
int     read_n_int      (int* t,unsigned int n,FILE* f);
void    affBin          (int d);

#endif // HEADER_H_INCLUDED
