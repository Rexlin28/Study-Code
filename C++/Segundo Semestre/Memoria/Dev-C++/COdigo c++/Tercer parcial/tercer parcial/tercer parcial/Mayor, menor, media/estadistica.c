#include <stdio.h>

int mayor(int vecto[], int n){
	int mayo, i;
	mayo=vecto[1];
		for(i=2; i<=n;i++)
			if(vecto[i]>mayo)
			mayo=vecto[i];	

	return mayo;
}

int menor(int vecto[], int n){
	int meno, j;
	meno=vecto[1];
		for(j=2; j<=n;j++)
			if(vecto[j]<meno)
			meno=vecto[j];	

	return meno;
}

float media(int vecto[], int n){
	int i;
	float suma;
	suma=0;
	for(i=1; i<=n; i++)
		suma+=vecto[i];
		suma=suma/n;
	return suma;
}


int dameIntervalo(char *mensa, int infe, int supe){
	int resu;
	printf("El intervalo valido es[%d, %d]", infe, supe);
	do{
	printf("%s", mensa);
	scanf("%d", &resu);	
	}while(resu<infe || resu>supe);

	return resu;
}

void capturarVector(int vecto[], int n){
	int i;
	for(i=1;i<=n;i++){
	printf("Ingrese el n%cmero %i : ",163, i);
	scanf("%d", &vecto[i]);
	 }
	
}
