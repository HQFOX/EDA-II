#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE 50000

int encontraValores(int capacidade,int array[capacidade],int numero)
{
	for(int i=0;i<capacidade;i++)
	{
		if(array[i]==numero)	//caso encontre o numero
		{
			return i;
		}
		if(array[i]>numero)	//caso o numero do array seja maior que o que se esta a procura
		{
			return -1;
		}
	}
	return -1;
}


int main(void)
{

	int array[CAPACIDADE];
	int valor=0;
	
	for(int i=0;i < CAPACIDADE; i++)
	{
		valor = valor + 2;
		array[i] = valor;
		//~ printf("%d ", array[i]);
	}
	//~ printf("%d", array[0]);
	for(int j=1; j <= CAPACIDADE; j++)
	{
		printf("%d\n",encontraValores(CAPACIDADE,array,j*2));
		//~ encontraValores(array,j*2);
	}
	
}
