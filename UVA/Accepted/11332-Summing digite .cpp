#include<stdio.h>

int main()
{
	int num,x;
	while(scanf("%d",&num) && num>0)
	{

		while(num>9)
        {
            int y=0;

            while(num/10>0)
            {
                x=num%10;
                num/=10;
                y=y+x;
            }
			num=num+y;
        }
            printf("%d",num);
			printf("\n");
	}

	return 0;
}
