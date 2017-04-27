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
	long long sum;
	int i,n;

	while(cin >> n && n!=0)
	{
		sum=0;

		for(i=n;i>0;i--)
		{
			sum+=(i*i);
		}

		cout << sum <<endl;
	}
	return 0;
}