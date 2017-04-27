#include<stdio.h>

int main()
{
	int i,n,k,p,t,plr;

	scanf("%d",&t);

	for(i=1;i<=t;i++)
	{
		scanf("%d%d%d",&n,&k,&p);

		if((k+p)%n==0)
		{
			plr=n;
		}
		else
		{
			if((p+k)>n)
			{
				plr=(k+p)%n;
			}
			else
			{
				plr=p+k;
			}
		}

		printf("Case %d: %d\n",i,plr);
	}

	return 0;
}