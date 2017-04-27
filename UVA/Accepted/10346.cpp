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
	int n,k,total;

	while(cin >> n >> k)
	{
		total=sum(n,k);

		cout << n+total <<endl;
	}
	return 0;
}