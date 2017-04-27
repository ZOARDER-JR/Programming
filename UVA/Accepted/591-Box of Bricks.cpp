#include<stdio.h>

int main()
{
	int n,h[55],cnt,i,total,a,j=1;

	while(scanf("%d",&n)==1)
	{
		if(n==0)
		{
			break;
		}

		total=cnt=0;

		for(i=0;i<n;i++)
		{
			scanf("%d",&h[i]);
			total+=h[i];
		}

		a=total/n;

		for(i=0;i<n;i++)
		{
			if(h[i]>a)
			{
				cnt+=(h[i]-a);
			}
		}

		printf("Set #%d\n",j);
		printf("The minimum number of moves is %d.\n\n",cnt);
		j++;

	}

	return 0;
}