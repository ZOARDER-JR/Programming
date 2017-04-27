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

int cola(int n)
{
	static int i=0;
	int b;
	b=n/3;
	n=(n%3)+b;
	if(n==2)
	{
		n++;
	}
	if(n==1)
	{
		i=0;
		return b;
	}
	else
	{
		return b+cola(n);
	}
}

int main()
{
	int a,r;

	while(cin >>a)
	{
		r=cola(a);

		cout << a+r <<endl;
	}
	return 0;
}