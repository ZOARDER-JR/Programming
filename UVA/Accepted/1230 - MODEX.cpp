#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

int bigmod(long long x,int y, int z);

int main()
{
	long long b,p,r;
	int m,i,n;

	cin >> n;

	for(i=1;i<=n;i++)
	{
		cin >> b >> p >> m;

		r=bigmod(b,p,m);

		cout << r <<endl;
	}
}

int bigmod(long long x,int y, int z)
{
	long long c;
	if(y==0)
		return 1;
	if(y%2==0)
	{
		c=bigmod(x,y/2,z);

		return ((c%z)*(c%z))%z;
	}
	if(y%2==1)
	{
		return ((x%z)*(bigmod(x,y-1,z)%z))%z;
	}

}