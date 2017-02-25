#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE 50000



int pesquisaBinaria(int capacidade,int array[capacidade], int numero, int limiteInferior, int limiteSuperior)
{
	int meio = (limiteInferior + limiteSuperior)/2;
	
	if(array[meio] == numero)
	{
			return meio;
	}
	else{
		//~ printf("LimiteInferior %d, LimiteSuperior %d, meio %d numero %d valor no array[meio] %d\n",limiteInferior,limiteSuperior,meio,numero, array[meio]);
		if(limiteInferior <= limiteSuperior)
		{
			if(array[meio] < numero)
				pesquisaBinaria(capacidade, array,numero,meio +1 ,limiteSuperior);
			if(array[meio] > numero)
				pesquisaBinaria(capacidade, array,numero,limiteInferior, meio-1);
		}
		else
			return -1;
	}
	return 0;
}


int main(void)
{
	int array[CAPACIDADE];
	int valor = 0;
	
	for(int i=0;i < CAPACIDADE; i++)
	{
		valor = valor +2;
		array[(i)]= valor;
		//~ printf("%d\n ", array[i]);
	}
	//~ printf("%d", array[0]);
	
	valor =0;
	for(int j=0; j < CAPACIDADE; j++)
	{
		valor = valor + 2;
			if(pesquisaBinaria(CAPACIDADE,array,valor,0,CAPACIDADE-1)==-1)
			{
				printf("Indice errado %d\n", j);
			}
	}
	puts("Terminou");
	
	
}
