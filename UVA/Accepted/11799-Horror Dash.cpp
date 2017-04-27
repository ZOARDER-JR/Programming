#include<stdio.h>

int main()
{
	int t,i,j,n,s,max;

	scanf("%d",&t);

	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);

		max=0;

		for(j=1;j<=n;j++)
		{
			scanf("%d",&s);

			if(s>max)
				max=s;
		}

		printf("Case %d: %d\n",i,max);
	}

	return 0;
}