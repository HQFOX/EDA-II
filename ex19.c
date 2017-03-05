#include <stdio.h>

void my_strcpy(char dest[], char src[])
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
}

void my_strcat(char dest[], char src[])
{
	int i = 0;
	int j = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0')
	{
		dest[i+j] = src[j];
		j++;
	}
}

int main(void)
{
	char string[20] = " caralho";
	char string2[20] = "p";
	
	my_strcpy(string2, string);
	printf(" string depois de my_strcpy %s \n: ", string2);
	my_strcat(string2, string);
	printf(" string depois de my_strcat %s \n: ", string2);
}
