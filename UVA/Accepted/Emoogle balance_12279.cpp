#include<stdio.h>

int main()
{
	int n,t,i,x,treat;

	t=1;
	while(scanf("%d",&n) && n!=0)
	{
		treat=0;

		for(i=1;i<=n;i++)
		{
			scanf("%d",&x);

			if(x!=0)
			{
				treat++;
			}
			else
			{
				treat--;
			}
		}

		printf("Case %d: %d\n",t,treat);

		t++;
	}

	return 0;
}