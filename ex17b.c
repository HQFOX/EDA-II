#include <stdio.h>


void multiplicaVector(int linhas,int colunas1,int array[linhas][colunas1] , int colunas2 ,int array2[colunas1][colunas2] , int resultado[linhas][colunas2])
{
	for (int i = 0; i < linhas; ++i)
		for (int j = 0; j < colunas2; ++j)
		{
			int valor = 0;
				
			for (int k = 0; k < colunas1; k++)
			{
				valor += array[i][k] * array[k][j];
			}
		resultado[i][j] = valor;
		}
}


int main(void)
{
	int array1[3][3] = {
		
		{2, 3 , 2},
		
		{1,1,1},
		
		{1,4,1}
		
	};
	int array2[3][3] = {
		
		{1,1,1},
		
		{1},
		
		{1,1,1}
		
	};
	
	int resultado[3][3];
	
	multiplicaVector(3,3, array1,3 ,array2,resultado);
	
	printf("\nArray multiplicado :\n");
	for(int i = 0; i< 3 ; i++)
	{
		for(int j = 0; j< 3 ; j++)
		{
			printf(" %*d",3, resultado[i][j]);
		}
	printf("\n");
	}
	return 0;
}
