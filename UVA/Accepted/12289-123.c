#include<stdio.h>

int main()
{
    int i,n;
    char ch[6];

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%s",&ch);

        if((ch[0]=='o' && ch[1]=='n') || (ch[0]=='o' && ch[2]=='e') || (ch[1]=='n' && ch[2]=='e'))
        {
            printf("1\n");
        }
        else if((ch[0]=='t' && ch[1]=='w') || (ch[0]=='t' && ch[2]=='o') || (ch[1]=='w' && ch[2]=='o'))
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }

    return 0;
}
