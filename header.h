#ifndef HEADER_H_
#define HEADER_H_

void citireVector(int *a, int n);
void afisareVector(int *a, int n);
void adunareVectori(int *a, int *b, int *c,int n);

void citireMatrice(int **a, int n, int m);
void afisareMatrice(int **a, int n, int m);
void adunareMatrice(int **a, int **b, int **c, int n, int m);

int inmultireVectorMatrice(int **a, int *b, int n, int m);
void prelucrareMatrice(int **matrice, int *a, int *b, int n, int m);

int SumaVector(int *a, int n);

void afisareVectorPlata(int *a, int n);
void afisareVectorMunca(int *a, int n);

void vectorZileMunca(int *a,int *b, int n, int G);
void afisareVectorMunca(int *a, int n);


#endif
