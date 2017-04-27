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
	long long temp,sum,n;

	while(cin >> n)
	{
		temp=(n*(n+1))/2;
		sum=(temp*temp);

		cout << sum <<endl;
	}
	return 0;
}