#include <stdio.h>
#include <math.h>
		
void citireVector(int *a, int n)
{
	int i; 
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
}

void afisareVector(int *a, int n)
{
	int i; 
	printf("(");
	for(i=0;i<n;i++)
	{
		printf(" %d ", a[i]);
	}
	printf(")");
}


void citireMatrice(int **a, int n, int m)
{
	int i; 
	for(i=0;i<n;i++)
	{
		citireVector(a[i],m);
	}
}

void afisareMatrice(int **a, int n, int m)
{
	int i; 
	for(i=0;i<n;i++)
	{
		afisareVector(a[i], m);
		printf("\n");
	}
}

void adunareVectori(int *a, int *b, int *c, int n)
{
	int i; 
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
}

void adunareMatrice(int **a, int **b, int **c,int  n,int  m)
{
	int i; 
	for(i=0;i<n;i++)
	{
		adunareVectori(a[i],b[i],c[i], m);	
	}
}

int inmultireVectorMatrice(int **a, int *b,int n, int m,int k)
{
	int i;
	int sum=0;
	for(i=0;i<m;i++)
	{
		sum += a[k][i]*b[i];
	}
	return sum;
}


void prelucrareMatrice(int **matrice, int *a,int *b, int n, int m)
{
	int k;
	for(k=0;k<n;k++)
	{
		b[k] = inmultireVectorMatrice(matrice,a,n,m,k);
	}
}

int SumaVector(int *a, int n)
{
	int suma=0;
	int i;

	for(i=0;i<n;i++)
	{
		suma += a[i];
	}
	
	return suma;

}

void afisareVectorPlata(int *a, int nr_pitici)
{
	int i; 
	for(i=0;i<nr_pitici;i++)
	{
		printf("--Piticul %d are de platit: %d galbeni\n\n--",i+1,a[i]);
	}
}

void vectorZileMunca(int *a, int *b, int n,int G)
{
	int i;
	for(i=0;i<n;i++)
	{
		b[i] =ceil((double)a[i]/G);
	}
}

void afisareVectorMunca(int *a, int n)
{
	int i; 
	for(i=0;i<n;i++)
	{
		printf("--Piticul %d are de muncit %d zile\n\n--", i+1, a[i]);
	}
}


