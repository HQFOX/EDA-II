#include <stdio.h>


int strwords(char string[])
{
	int i = 0;
	int numeroDePalavras = 0;
	int flag = 0;
	
	while(string[i] != '\0')
	{
		if(string[i] >= 48) //caso seja numero ou letra
		{
			if(flag == 0)
			{
				flag = 1;
				numeroDePalavras += 1;
			}
		}
		if(string[i] == 32)
		{
			flag = 0;
		}
		i++;
	}
	return numeroDePalavras;	
}


int main (void)
{
	//~ char string1[] = "uma";
	char string2[] = "  uma duas    quatro ";
	
	printf("numero de palavras na String: %d\n",strwords(string2));
	
}
