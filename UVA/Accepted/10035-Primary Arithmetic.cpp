#include<stdio.h>
#include<string.h>

int main()
{
	int num1,num2;
	int cnt,i,j,k;

	int degit1[15];
	int degit2[15];

	while(scanf("%d%d",&num1,&num2)==2)
	{
		if(num1==0 && num2==0)
		{
			break;
		}
		i=j=cnt=0;

		memset(degit1,0,sizeof(degit1));
		memset(degit2,0,sizeof(degit2));

		while(num1>0)
		{
			degit1[i]=num1%10;
			num1/=10;
			i++;
		}
		
		while(num2>0)
		{
			degit2[j]=num2%10;
			num2/=10;
			j++;
		}
		
		if(i<j)
		{
			i=j;
		}
		k=0;

		for(j=0;j<i;j++)
		{
			if(degit1[j]+degit2[j]+k>9)
			{
				cnt++;
				k=1;
			}
			else
			{
				k=0;
			}
		}
		
		if(cnt==0)
		{
			printf("No carry operation.\n");			
		}
		else if(cnt==1)
		{
			printf("%d carry operation.\n",cnt);
		}
		else
		{
			printf("%d carry operations.\n",cnt);
		}	
	}

	return 0;
}