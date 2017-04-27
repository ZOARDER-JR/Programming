#include<stdio.h>

int main()
{
	int a,b,add,i,t,j;

	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		add=0;

		scanf("%d%d",&a,&b);

		if(a%2==0)
		{
			a=a+1;

			while(a<=b)
			{
				add+=a;
				a+=2;
			}
		}
		else
		{
			while(a<=b)
			{
				add+=a;
				a+=2;
			}
		}

		printf("Case %d: %d\n",i,add);
	}

	return 0;
}