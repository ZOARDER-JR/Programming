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
	int g,l,t,i;

	cin >> t;

	for(i=1;i<=t;i++)
	{
		cin >> g >> l;

		if(l%g==0)
		{
			cout << g << " " << l <<endl;
		}
		else
		{
			cout << -1 <<endl;
		}
	}
	return 0;
}