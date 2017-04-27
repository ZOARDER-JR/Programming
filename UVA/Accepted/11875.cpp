#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,t,i,j;
	int player[11];

	cin >> t;

	for(i=1;i<=t;i++)
	{
		cin >> n;

		for(j=0;j<n;j++)
		{
			cin >> player[j];
		}

		cout << "Case " << i <<": " << player[n/2] <<endl;
	}
	return 0;
}