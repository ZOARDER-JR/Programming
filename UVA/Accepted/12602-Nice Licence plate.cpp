#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,j,sum1,sum2;
	char ch, strng[10];

	scanf("%d%c",&n,&ch);

	while(n>0)
	{
		gets(strng);

		sum1 = 0;
		for(i=0;i<3;i++)
		{
			j = strng[i]-'A';
			sum1 += (j * pow(26.0,2-i));
		}

		sum2 = 0;
		for(i=0;i<4;i++)
		{
			j = strng[i+4]-'0';
			sum2 += (j * pow(10.0,3-i));
		}

		int x;
		x=(int)(fabs((sum1-sum2)*1.0));

		if(x<= 100)
			printf("nice\n");
		else
			printf("not nice\n");

		n--;
	}
	return 0;
}
