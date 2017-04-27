#include<stdio.h>

int main()
{
	int a,b,t;

	scanf("%d",&t); 
	
	for(int x=1;x<=t;x++)
	{
		scanf("%d%d",&a,&b);

		if(a>b)
			printf(">");
		else if(b>a)
			printf("<");
		else
			printf("=");

		printf("\n");
	}
	
	return 0;
}