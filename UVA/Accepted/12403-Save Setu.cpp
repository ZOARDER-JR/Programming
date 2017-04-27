#include<stdio.h>

int main()
{
    char ch[10];
    int i,sum,num,t;

    scanf("%d",&t);
    sum=0;

    for(i=1;i<=t;i++)
    {

        scanf("%s",&ch);

        if(ch[0]=='d')
        {
            scanf("%d",&num);
            sum+=num;
        }
        else
        {
            printf("%d\n",sum);
        }
    }

	return 0;
}
