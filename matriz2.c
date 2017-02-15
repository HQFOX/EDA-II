#include <stdio.h>


#define SIZE 10 


int main(void)
{
	int multiplicador = 1;
	
	for(int i=0;i<SIZE;i++)
	{
		for(int j=1;j<=multiplicador;j++)
		{
				printf( "%*d ",3, j * multiplicador);
		}
		multiplicador++;
		printf("\n");
	}
}
