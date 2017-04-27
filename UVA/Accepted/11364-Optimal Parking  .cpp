#include<stdio.h>

int main()
{
	int i,j,k,p[25],t,n,d,temp;

	scanf("%d",&t);
	
	for(i=1;i<=t;i++)
	{
		temp=0;
		scanf("%d",&n);

		for(j=0;j<n;j++)
		{
			scanf("%d",&p[j]);
		}

		for(j=0;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(p[j]>p[k])
				{
					temp=p[k];
					p[k]=p[j];
					p[j]=temp;
				}
			}
		}

		d=2*(p[n-1]-p[0]);

		printf("%d\n",d);
	}

	return 0;
}