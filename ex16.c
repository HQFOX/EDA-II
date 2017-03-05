#include <stdio.h>

int my_strlen(char string[])
{
	int i = 0;
	while(string[i]!='\0')
	{
		i++;
	}
	
	return i;
}

int main(void)
{
	char string[] = "123";
	char string1[] = "uma maiorzita";
	char string2[] = "uma string com \"outra string\" la\' dentro";
	char string3[] = "\n" ;
	char string4[] = "\\n" ;
	char string5[] ="" ;

	
	printf("Comprimento da String %s: %d\n", string, my_strlen(string));
	printf("Comprimento da String2 %s: %d\n", string1, my_strlen(string1));
	printf("Comprimento da String3 %s: %d\n", string2, my_strlen(string2));
	printf("Comprimento da String4 %s: %d\n", string3, my_strlen(string3));	//muda de linha
	printf("Comprimento da String5 %s: %d\n", string4, my_strlen(string4));
	printf("Comprimento da String6 %s: %d\n", string5, my_strlen(string5));
	return 0;
}
