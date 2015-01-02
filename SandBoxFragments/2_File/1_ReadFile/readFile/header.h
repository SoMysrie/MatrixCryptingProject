#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>

void    choiceFile      (int *choice);
void    choiceAgain     (int *choice);
long    sizeFile        ();
int     saveBits        (long taille);

#endif // HEADER_H_INCLUDED
