#include<stdio.h>

int main()
{
    char x;

    int cnt=1;

    while(scanf("%c",&x) && x!=EOF)
    {
        if(x=='\"' && cnt%2!=0)
        {
            printf("``");
            cnt++;
        }
        else if(x=='\"' && cnt%2==0)
        {
            printf("''");
            cnt++;
        }
        else
        {
            printf("%c",x);
        }
    }

    return 0;

}
