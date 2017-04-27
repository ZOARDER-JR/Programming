#include<stdio.h>

int main()
{		
	char ch[6];
	int i=1;
	
	while(gets(ch) && ch[0]!='*')
	{
		if(ch[0]=='H')
		{
			printf("Case %d: Hajj-e-Akbar\n",i);
		}
		else if(ch[0]=='U')
		{
			printf("Case %d: Hajj-e-Asghar\n",i);
		}

		i++;
	}

	return 0;
}