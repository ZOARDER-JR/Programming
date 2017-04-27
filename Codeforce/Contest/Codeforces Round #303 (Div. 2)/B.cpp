#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<iomanip>
#include<utility>
#include<stack>
#include<queue>
#include<list>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
#include<string>
#include<deque>

using namespace std;

int main()
{
	string s,t,p;
	int i,sz,d=0;
	bool flag=false;

	cin >> s >> t;

	sz=s.size();

	for(i=0;i<sz;i++)
	{
		if(s[i] != t[i])
		{
			d++;

			if(flag)
			{
				p.push_back(t[i]);
				flag=false;
			}
			else
			{
				p.push_back(s[i]);
				flag=true;
			}
		}
		else
		{
			p.push_back(s[i]);
		}
	}

	if(d%2 == 0)
	{
		cout << p <<endl;
	}
	else
	{
		cout << "impossible" <<endl;
	}
	return 0;
}