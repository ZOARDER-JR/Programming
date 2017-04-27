#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	char str[12],ch,temp;
	string msg;
	int i,j,k;
	bool flag=false;

	do
	{
		fflush(stdin);
		gets(str);

		if(strcmp(str,"___________")!=0)
		{
			i=0;
			j=7;
			k=0;

			while(str[i])
			{
				if(str[i]=='o')
				{
					k+=pow(2*1.0,j*1.0);
					j--;
				}
				else if(str[i]==' ')
				{
					j--;
				}
				i++;
			}

			ch=k;

			msg.push_back(ch);
			flag=true;
		}
	}while(strcmp(str,"___________")!=0 || !flag);

	cout << msg;
	return 0;
}