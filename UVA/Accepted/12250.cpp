#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	char a[15];
	int i=1;

	while(gets(a) && *a!='#')
	{
		if(strcmp(a,"HELLO")==0)
		{
			printf("Case %d: ENGLISH\n",i);
		}
		else if(strcmp(a,"HOLA")==0)
		{
			printf("Case %d: SPANISH\n",i);
		}
		else if(strcmp(a,"HALLO")==0)
		{
			printf("Case %d: GERMAN\n",i);
		}
		else if(strcmp(a,"BONJOUR")==0)
		{
			printf("Case %d: FRENCH\n",i);
		}
		else if(strcmp(a,"CIAO")==0)
		{
			printf("Case %d: ITALIAN\n",i);
		}
		else if(strcmp(a,"ZDRAVSTVUJTE")==0)
		{
			printf("Case %d: RUSSIAN\n",i);
		}
		else
		{
			printf("Case %d: UNKNOWN\n",i);
		}

		i++;
		
	}
	return 0;
}