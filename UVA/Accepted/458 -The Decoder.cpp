#include<stdio.h>

int main()
{
	char str[1000];
	int i;

	while(gets(str))
	{
		i=0;

		while(str[i]!='\0')
		{
			str[i]=str[i]-7;
			printf("%c",str[i]);
			i++;
		}

		printf("\n");
	}

	return 0;

}