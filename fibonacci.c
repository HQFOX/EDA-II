#include <stdio.h>



int fibonacciRecursivo(int resultado)
{
	if(resultado == 0)
		return 0;
	else if(resultado == 1)
		return 1;
	else 
		return fibonacciRecursivo(resultado-1) + fibonacciRecursivo(resultado-2);
}

int fibonacciIterativo(int numeroElementos)
{
	int resultado =0;
	int resultadoAnterior =1;
	int i =0;	//contador
	
	
	while(i<numeroElementos)
	{
		int resultadoProximo = resultado + resultadoAnterior;
		resultadoAnterior = resultado;
		resultado = resultadoProximo;
		i++;
	}
	return resultado;
}


int main(void)
{
	int j;
	puts("FIBONACCI RECURSIVO");
	for(j=0;j<19;j++)
		printf("%d ", fibonacciRecursivo(j));
	printf("%d\n", fibonacciRecursivo(j));
	for(j=0;j<19;j++)
		printf("%d ", fibonacciIterativo(j));
	printf("%d\n ", fibonacciIterativo(j));
	

	return 0;
}	
	
