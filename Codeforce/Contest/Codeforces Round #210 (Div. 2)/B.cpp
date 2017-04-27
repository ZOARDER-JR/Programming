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
	int n,k,i,m;

	while(cin >> n >> k)
	{
		if(n==k)
		{
			cout << -1 <<endl;
		}
		else if(n-1==k)
		{
			cout << 1;

			for(i=2;i<=n;i++)
			{
				cout << " " << i;
			}
			cout << endl;
		}
		else
		{
			cout << n;
			m=2;
			
			for(i=0;i<k;i++)
			{
				cout << " " << m++;
			}

			cout << " 1";

			for(i=m;i<n;i++)
			{
				cout << " " << i;
			}

			cout << endl;
		}
	}
	return 0;
}