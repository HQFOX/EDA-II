#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE 50000



int pesquisaBinaria(int capacidade,int array[capacidade], int numero)
{
	int limiteInferior = 0;
	int limiteSuperior = capacidade-1;
	int meio;
	
	while(limiteInferior <= limiteSuperior)
	{
		meio = (limiteInferior + limiteSuperior)/2;
		
		if(array[meio] == numero)
				return meio;
		if(array[meio] < numero)
			limiteInferior = meio+1;
		else
			limiteSuperior = meio-1;	
	}
	return -1;	
}


int main(void)
{
	int array[CAPACIDADE];
	int valor = 0;
	
	for(int i=0;i < CAPACIDADE; i++)
	{
		valor = valor +2;
		array[(i)]= valor;
		//~ printf("%d ", array[i]);
	}
	//~ printf("%d", array[0]);
	
	valor =0;
	for(int j=0; j < CAPACIDADE; j++)
	{
		valor = valor +2;
			if(pesquisaBinaria(CAPACIDADE,array,valor)==-1)
			{
				printf("Indice errado %d", j);
			}
	}
	puts("Terminou");
	
}
