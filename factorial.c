#include <stdio.h>

int factorialRecursivo(int numero)
{
	if(numero!=0)
	{
		return numero * factorialRecursivo(numero-1);
	}
	else
	{
		return 1;
	}
}

int factorialIterativo(int numero)
{
	int resultado=1;
	for(;numero>=1;numero--)
		{
			resultado = resultado* numero;
		}
	return resultado;	

}

int main(void){
	
	int x = factorialRecursivo(10);
	printf("Resultado Recursivo %d\n",x);
	x= factorialIterativo(10);
	printf("Resultado Iterativo %d\n",x);
	
	
	
	return 0;
	
}
	
	
