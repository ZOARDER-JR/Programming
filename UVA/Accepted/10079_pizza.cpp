#include<stdio.h>

int main()
{
	long long n,x;

	while(scanf("%lld",&n)==1)
	{
		if(n<0)
		{
			break;
		}
		x=(n*n+n+2)/2;

		printf("%lld\n",x);
	}

	return 0;
}