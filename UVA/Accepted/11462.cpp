#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<string>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
	map<int,int> m;
	map<int,int>::iterator it;
	int a,tmp,i,j;
	bool first;

	while(cin >> a && a!=0)
	{
		m.clear();
		for(i=0;i<a;i++)
		{
			cin >> tmp;
			it = m.find(tmp);
			if(it == m.end())
			{
				m[tmp] = 1;
			}
			else
			{
				m[tmp]++;
			}
		}
		
		first = false;
		for(it=m.begin();it!=m.end();it++)
		{
			tmp = (*it).second;
			j = (*it).first;

			while(tmp--)
			{
				if(first)
				{
					cout << " ";
				}
				first = true;
				cout << j;
			}
		}
		cout <<endl;
	}
	return 0;
}