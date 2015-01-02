#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>

void    displayMatrix           (int tab[4][4]);
void    askMatrix               (int tab[4][4]);
int     verifMatrixNull         (int tab[4][4]);
int     verifMatrixDuplicate    (int tab[4][4]);
void    displayGenerator        (int tab1[4][4], int tab2[4][4], int tab3[4][8]);
void    productMatrix           (int tab1[4][4], int tab2[4][4], int tab3[4][8]);


#endif // HEADER_H_INCLUDED
