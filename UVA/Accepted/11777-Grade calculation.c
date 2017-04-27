#include<stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        int t1,t2,f,a,ct1,ct2,ct3,c,T,temp;
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);

        if(ct1>ct2)
        {
            temp=ct2;
            ct2=ct1;
            ct1=temp;
        }
        if(ct1>ct3)
        {
            temp=ct3;
            ct3=ct1;
            ct1=temp;
        }
        if(ct2>ct3)
        {
          temp=ct3;
          ct3=ct2;
          ct2=temp;
        }

        c=(ct3+ct2)/2;

        T=t1+t2+f+a+c;

        if(T>=90)
            printf("Case %d: A\n",i);
        else if(T>=80 && T<90)
            printf("Case %d: B\n",i);
        else if(T>=70 && T<80)
            printf("Case %d: C\n",i);
        else if(T>=60 && T<70)
            printf("Case %d: D\n",i);
        else
            printf("Case %d: F\n",i);
    }

    return 0;
}
