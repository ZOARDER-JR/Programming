#include<stdio.h>
#include<math.h>

int main()
{
	int t,d,n,pl,i,j,a,rec,temp,temp_rec;

	scanf("%d",&t);

	for(i=1;i<=t;i++)
	{
		scanf("%d",&d);
		pl=1;
		rec=0;
		for(j=1;j<=d;j++)
		{
			scanf("%d",&n);

			if(n>0)
				pl*=n;
			else
				pl/=(-1*n);

			temp=pl;
			temp_rec=0;

			for(a=1;a<=sqrt(pl*1.0);a++)
			{
				
				if(pl%a==0)
				{
					temp_rec++;
					temp=pl/a;
				}			
			}

			if(temp==a-1)
				rec=rec+((temp_rec*2)-1);
			else
				rec=rec+temp_rec*2;

			rec%=1000000007;
		}

		printf("Case %d: %d\n",i,rec);
	}

	return 0;
}