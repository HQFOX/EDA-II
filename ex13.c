#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE 50000

int encontraValores(int array[CAPACIDADE],int numero)
{
	for(int i=0;i<CAPACIDADE;i++)
	{
		if(array[i]==numero)
		{
			return i;
		}
	}
	return -1;
}

int pesquisaBinaria(int array[CAPACIDADE], int numero)
{
	int limiteInferior = 0;
	int limiteSuperior = CAPACIDADE-1;
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
	
	for(int i=1;i <= CAPACIDADE; i++)
	{
		array[(i-1)]= i*2;
		//~ printf("%d ", array[i-1]);
	}
	//~ printf("%d", array[0]);
	for(int j=1; j <= CAPACIDADE; j++)
	{
		//~ printf("%d\n",encontraValores(array,j*2));
		//~ encontraValores(array,j*2);
		printf("%d\n",pesquisaBinaria(array,j*2));
	}
	
}
