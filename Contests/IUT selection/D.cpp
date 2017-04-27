#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    int i,j,k;
    char str[200],str1[200],str2[200];
    bool flag;

    while(gets(str))
    {
		if(strcmp(str,"END")==0)
		{
			break;
		}

		i=0;

		if(str[i]=='"')
		{
			i++;

			while(str[i]!='"')
			{
				str1[i-1]=str[i];
				i++;
			}

			str1[i-1]=0;

			if(str[i+1]==' ')
			{
				i+=2;
			}

			j=0;

			while(str[i]!=0)
			{
				str2[j]=str[i];
				i++;
				j++;
			}

			str2[j]=0;

			if(strcmp(str1,str2)==0)
			{
				cout << "Quine(" << str1 << ")" <<endl;
			}
			else
			{
				cout << "not a quine" <<endl;
			}
		}
		else
		{
			cout << "not a quine" <<endl;
		}
	}
    return 0;
}
