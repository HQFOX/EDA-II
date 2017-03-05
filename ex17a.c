#include <stdio.h>


void inverteVector(int capacidade,int array[capacidade])
{
	for(int i=0;i<capacidade;i++)
	{
		int j = capacidade-(i+1); //indice a partir do fim
			if(j>i)
			{
				int buffer = array[i];
				array[i]=array[j];
				array[j]=buffer;
			}
			else
				break;
	}
}

int main(void)
{
	int array1[4] = {500, 3 , 2, 1};
	
	inverteVector(4, array1);
	
	printf("\nArray inverso :");
	for(int i = 0; i< 4 ; i++)
	{
		printf(" %d ", array1[i]);
	}
	printf("\n");
	return 0;
}
