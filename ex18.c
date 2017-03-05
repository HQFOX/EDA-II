#include <stdio.h>

int my_strcmp(char string1[] , char string2[])
{
	int i = 0;
	int j = 0;
	int valor1 = 0;
	int valor2 = 0;
	
	while((string1[i] != '\0') || (string2[j] != '\0'))
	{
		if(string1[i] != '\0')
		{
			//~ printf("letra string1 %c\n",string1[i]);
			valor1 = valor1 + string1[i];
			i++;
		}
		if(string2[j] != '\0')
		{
			//~ printf("letra string2 %c\n",string2[j]);
			valor2 = valor2 + string2[j];
			j++;
		}
	}
	if(valor1 == valor2)
		return 0;
	if(valor1 > valor2)
		return 1;
	else
		return -1;
}

int main( void )
{
	char string1[] = "O caralho que te foda";
	char string2[] = "String";
	
	printf("my_strcmp %d \n",my_strcmp(string1,string2));
	
	
	return 0;
}
