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

int Past(int a)
{
	static int p=1;
	int temp=1;
	p*=2;

	if(p>=a)
	{
		p=1;
		return temp;
	}
	else
	{
		return temp+Past(a);
	}
}

int main()
{
	int n,i,t=1;

	while(cin >> n && n>=0)
	{
		if(n==1)
		{
			cout << "Case " << t << ": " << 0 <<endl;
		}
		else
		{
			i=Past(n);

			cout << "Case " << t << ": " << i <<endl;
		}
		t++;
	}
	return 0;
}