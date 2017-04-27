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
	int k,n,m,x,y;

	while(cin >> k && k!=0)
	{
		cin >> n >> m;
		while(k--)
		{
			cin >> x >> y;

			x-=n;  y-=m;

			if(x==0 || y==0)
			{
				cout << "divisa" <<endl;
			}
			else if(x>0 && y>0)
			{
				cout << "NE" <<endl;
			}
			else if(x<0 && y<0)
			{
				cout << "SO" <<endl;
			}
			else if(x>0 && y<0)
			{
				cout << "SE" <<endl;
			}
			else
			{
				cout << "NO" <<endl;
			}
		}
	}
	return 0;
}