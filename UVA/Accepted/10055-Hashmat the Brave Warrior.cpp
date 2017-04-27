#include <stdio.h>

int main()
{
	long long int x,y,z;

	while(scanf("%lld%lld",&x,&y)==2)
	{
		if(x<y)
		{
			z = y - x;
		}
		else
		{
			z = x - y;
		}

		printf("%lld\n",z);
	}

	return 0;
}