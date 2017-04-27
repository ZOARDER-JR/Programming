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
	char str[1200],ch,ch1;
	int i,j;
	bool flag;

	while(gets(str))
	{
		if(strcmp(str,"*")==0)
		{
			break;
		}

		if(str[0] >= 'A' && str[0] <= 'Z' )
		{
			ch=str[0];
			ch1=str[0]+32;
		}
		else
		{
			ch=str[0];
			ch1=str[0]-32;

		}
		flag=true;
		i=1;

		while(str[i]!='\0')
		{
			if(str[i]==' ')
			{
				if(str[i+1]!=ch && str[i+1]!=ch1)
				{
					flag=false;
					break;
				}
			}

			i++;
		}

		if(flag)
		{
			cout << "Y" <<endl;
		}
		else
		{
			cout << "N" <<endl;
		}
	}
	return 0;
}