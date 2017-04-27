#include<stdio.h>

int main()
{
	int h[55],t,n,i,j,k,H,L;

	scanf("%d",&t);

	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		H=L=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&h[j]);
		}
		for(k=0;k<n-1;k++)
		{
			if(h[k]>h[k+1])
			{
				L++;
			}
			else if(h[k]<h[k+1])
			{
				H++;
			}
		}

		printf("Case %d: %d %d\n",i,H,L);

	}

	return 0;
}