#include<stdio.h>

int main()
{
	int t,s1,s2,s3,i,temp;

	scanf("%d",&t);

	for(i=1;i<=t;i++)
	{	
		temp=0;

		scanf("%d%d%d",&s1,&s2,&s3);

		if(s1>s2)
		{
			temp=s2;
			s2=s1;
			s1=temp;
		}
		if(s1>s3)
		{
			temp=s3;
			s3=s1;
			s1=temp;
		}
		if(s2>s3)
		{
			temp=s3;
			s3=s2;
			s2=temp;
		}

		printf("Case %d: %d\n",i,s2);
	}

	return 0;
}