#include <stdio.h>
#include "header.h"
#include "alocare.h"

int main(void)
{
	int G,n,m; 
	
	int **stocuri_initiale=NULL;
	int **stocuri_comenzi=NULL;
	int **stocuri_finale=NULL;
	int *preturi=NULL;
	int *plata_pitici=NULL;
	int *zile_munca=NULL;

	printf("--se citesc de la tastatura:\n 1. plata pe o zi de munca a unui pitic  \n2. numarul de pitici  \n4. numarul de rafturi\n\n");
	scanf("%d%d%d", &G, &n, &m);
	printf("=================================================================================================================\n");

	stocuri_initiale = alocare2d(n,m);
	stocuri_comenzi = alocare2d(n,m);
	stocuri_finale = alocare2d(n,m);
	preturi = alocare(m);
	plata_pitici = alocare(m);
	zile_munca = alocare(n);

	printf("=================================================================================================================\n");
	printf("--Introduceti stocurile initiale de pe rafturile piticilor: \n");
	printf("=================================================================================================================\n");
	citireMatrice(stocuri_initiale, n,m);

	printf("=================================================================================================================\n");
	printf("--Introduceti comenzile piticilor:\n");	
	printf("=================================================================================================================\n");
	citireMatrice(stocuri_comenzi,n,m);
	
	printf("=================================================================================================================\n");
	printf("Introduceti preturile pentru fiecare produs\n");
	printf("=================================================================================================================\n");
	citireVector(preturi, m);


	adunareMatrice(stocuri_initiale, stocuri_comenzi, stocuri_finale, n,m);

	afisareMatrice(stocuri_finale,n,m);

	prelucrareMatrice(stocuri_comenzi,preturi,plata_pitici,n,m);
	
	printf("=================================================================================================================\n");
	afisareVectorPlata(plata_pitici,n);

	printf("=================================================================================================================\n");
	vectorZileMunca(plata_pitici,zile_munca,n,G);
	printf("=================================================================================================================\n");
	
	afisareVectorMunca(zile_munca,n);

	printf("=================================================================================================================\n");
	dealocare2d(stocuri_initiale,n,m);
	dealocare2d(stocuri_comenzi,n,m);
	dealocare2d(stocuri_finale,n,m);
	dealocare(preturi,m);
	dealocare(plata_pitici,m);
	dealocare(zile_munca,n);








	



return 0;
}
