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
#include<utility>
#include<iomanip>

using namespace std;

int main()
{
	int n,k,i;
	long long res;

	while(cin >> n >> k)
	{
		if(n==0 && k==0)
		{
			break;
		}
		if(k>(n/2))
		{
			k=n-k;
		}

		res=1;

		for(i=1;i<=k;i++)
		{
			res=res*(n-k+i)/i;
		}

		cout << res <<endl;
	}
	return 0;
}