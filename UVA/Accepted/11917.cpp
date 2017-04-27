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
	int t,n,d,i,D;
	string str,STR;
	map<string,int> m;
	map<string,int>::iterator it;

	cin >> t;

	for(i=1;i<=t;i++)
	{
		m.clear();
		cin >> n;
		
		while(n--)
		{
			cin >> str >> d;
			m[str]=d;
		}
		cin >> D >> STR;

		it=m.find(STR);

		if(it==m.end())
		{
			cout << "Case " << i << ": Do your own homework!" << endl;
		}
		else
		{
			d=it->second;

			if(d<=D)
			{
				cout << "Case " << i << ": Yesss" << endl;
			}
			else if(d>D && d<=(D+5))
			{
				cout << "Case " << i << ": Late" << endl;
			}
			else
			{
				cout << "Case " << i << ": Do your own homework!" << endl;
			}
		}
	}
	return 0;
}