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

int sum(int a,int b)
{
	int temp=0;

	if(a<b)
	{
		return 0;
	}
	else
	{
		temp=a/b;
		a%=b;
		return temp+sum(a+temp,b);
	}
}

int main()
{
	int n,m,k,total,t;

	cin >> t;

	while(t--)
	{
		cin >> n >> m >> k;

		total=sum(n+m,k);

		cout << total <<endl;
	}
	return 0;
}