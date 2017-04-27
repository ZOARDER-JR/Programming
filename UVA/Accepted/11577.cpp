#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<string>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main()
{
	int t,i,j,max;
	char txt[201],ch;
	map<char,int> m;
	map<char,int>::iterator it;

	cin >>t;
	ch=getchar();
	while(t--)
	{
		m.clear();
		gets(txt);

		i=0;max=0;
		while(txt[i]!='\0')
		{
			if(isalpha(txt[i]))
			{
				if(isupper(txt[i]))
				{
					txt[i]=tolower(txt[i]);
				}
				it=m.find(txt[i]);
				if(it==m.end())
				{
					m[txt[i]]=1;
				}
				else
				{
					m[txt[i]]++;
				}
				
				if(m[txt[i]]>max)
				{
					max=m[txt[i]];
				}
			}
			i++;
		}

		for(it=m.begin();it!=m.end();it++)
		{
			if(it->second==max)
			{
				cout << it->first;
			}
		}

		cout <<endl;
	}
	return 0;
}