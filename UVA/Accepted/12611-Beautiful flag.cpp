#include<stdio.h>

int main()
{
	int R,x1,x2,y1,y2,t,i;

	scanf("%d",&t);

	for(i=1;i<=t;i++)
	{
		scanf("%d",&R);

		x1=(11*R)/4;
		x2=(-9*R)/4;
		y1=(6*R)/4;
		y2=(-6*R)/4;

		printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n",i,x2,y1,x1,y1,x1,y2,x2,y2);
	}

	return 0;
}