#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int **alocare2d(int n, int m)
{
	int **a=NULL;
	int i;


	a = (int **)calloc(n,sizeof(int *));
	if(a==NULL)
	{
		fprintf(stderr,"EROARE, ALOCARE ESUATA!");
		exit(EXIT_FAILURE);
	}

	for(i=0;i<m;i++)
	{
		a[i] = (int *)calloc(m,sizeof(int));
		if(a[i] == NULL)
		{
			fprintf(stderr,"EROARE, ALOCARE ESUATA!");
			exit(EXIT_FAILURE);
		}
	
	}
	return a;
}

void dealocare2d(int **a, int n, int m)
{
	int i; 

	for(i=0;i<m;i++)
	{
		memset(a[i], 0 , m*sizeof(int));
		free(a[i]);
	
	}

	memset(a,0,n*sizeof(int *));
	free(a);

}

int *alocare(int n)
{
	int *a=NULL;
	a = (int *)calloc(n,sizeof(int));
	if(a == NULL)
	{
		fprintf(stderr,"EROARE, ALOCARE ESUATA");
		exit(EXIT_FAILURE);
	}
	return a;
}

void dealocare(int *a,int n)
{
	memset(a,0,n*sizeof(int));
	free(a);
}
