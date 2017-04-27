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
	string str;
	map<char,int> m;
	map<char,int>::iterator it;
	int k,i,j;
	char ch;
	bool flag;

	while(cin >> k)
	{
		ch=getchar();
		m.clear();

		getline(cin,str);

		for(i=0;i<str.length();i++)
		{
			it=m.find(str[i]);

			if(it!=m.end())
			{
				m[str[i]]++;
			}
			else
			{
				m[str[i]]=1;
			}
		}
		flag=true;

		for(it=m.begin();it!=m.end();it++)
		{
			if(it->second!=k)
			{
				flag=false;
				break;
			}
		}

		if(flag)
		{
			while(k--)
			{
				for(it=m.begin();it!=m.end();it++)
				{
					cout << it->first;

				}
			}
		}
		else
		{
			cout << -1;
		}

		cout <<endl;
	}
	return 0;
}