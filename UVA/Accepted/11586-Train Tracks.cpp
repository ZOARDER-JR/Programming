#include<stdio.h>

int main()
{
    int t,i,j,m,f;
    char ch[175],x;

    scanf("%d%c",&t,&x);

    for(i=1;i<=t;i++)
    {
        gets(ch);

        j=0;
        m=f=0;

        while(ch[j]!='\0')
        {
            if(ch[j]=='M')
            {
                m++;
            }
            else if(ch[j]=='F')
            {
                f++;
            }

            j++;
        }

        if(m==f && m>=2)
        {
            printf("LOOP\n");
        }
        else
        {
            printf("NO LOOP\n");
        }
    }

    return 0;
}
