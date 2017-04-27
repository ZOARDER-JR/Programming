#include<stdio.h>

int main()
{
	int t,l,i,j,c[55],cnt,temp;
	bool flag;

	scanf("%d",&t);

	for(i=1;i<=t;i++)
	{
		scanf("%d",&l);
		cnt=0;

		for(j=0;j<l;j++)
		{
			scanf("%d",&c[j]);
		}

		while(1)
		{
			flag=1;

			for(j=0;j<(l-1);j++)
			{
				if(c[j]>c[j+1])
				{
					temp=c[j+1];
					c[j+1]=c[j];
					c[j]=temp;
					cnt++;
					flag=0;
				}
			}

			if(flag==1)
			{
				break;
			}

		}

		printf("Optimal train swapping takes %d swaps.\n",cnt);
	}

	return 0;
}