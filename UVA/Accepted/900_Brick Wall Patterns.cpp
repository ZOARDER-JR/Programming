#include<stdio.h>

int main()
{
	int n,i;
	long long fac,x1,x2;

	while(scanf("%d",&n))
	{
		if(n==0)
		{
			break;
		}

		if(n==1)
		{
			printf("1\n");
		}
		else if(n==2)
		{
			printf("2\n");
		}
		else
		{
			x1=1;x2=2;
			for(i=3;i<=n;i++)
			{
				fac=x1+x2;
				x1=x2;
				x2=fac;
			}

			printf("%lld\n",fac);
		}
	
	}

	return 0;
}