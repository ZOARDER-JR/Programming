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
#include<iomanip>

using namespace std;

int main()
{
	string c,n;
	int i;
	map<string,int> m;
	map<string,int>::iterator it;

	while(cin >> i)
	{
		m.clear();
		while(i--)
		{
			cin >> c;
			getline(cin,n);

			it=m.find(c);

			if(it!=m.end())
			{
				m[c]++;
			}
			else
			{
				m[c]=1;
			}
		}

		for(it=m.begin();it!=m.end();it++)
		{
			cout << it->first << " " << it->second <<endl;
		}
	}
	return 0;
}