#include<stdio.h>

int main()
{
	int num1, num2, temp1, temp2;
	int temp;
	int count, maxC;

	while(scanf("%d%d",&num1,&num2) == 2)
	{
		temp1 = num1;
		temp2 = num2;
		maxC = 0;

		if(temp1 > temp2)
		{
			temp = temp1;
			temp1 = temp2;
			temp2 = temp;
		}

		while(temp1 <= temp2)
		{
			temp = temp1;
			count = 1;

			while(temp > 1)
			{
				if(temp % 2 == 1)
				{
					temp = (3 * temp) + 1;
				}
				else
				{
					temp /= 2;
				}
				count++;
			}
			if(count > maxC)
			{
				maxC = count;
			}
			temp1++;
		}

		printf("%d %d %d\n",num1,num2,maxC);
	}
	return 0;
}