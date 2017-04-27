#include<stdio.h>

int main()
{
    int t,n,i,num,temp;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);

        num=(((n*567)/9+7492)*235)/47-498;

        temp=num/10;
        num=temp%10;

        if(num<0)
        {
            num*=-1;
        }

        printf("%d\n",num);
    }

    return 0;
}
