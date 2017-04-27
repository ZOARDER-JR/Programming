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

int main()
{
	int a,b,c;

	while(cin >> a >>b >> c)
	{
		if(a==b && b==c)
		{
			cout << "*" <<endl;
		}
		else
		{
			if(a==b)
			{
				cout << "C" <<endl;
			}
			if(a==c)
			{
				cout << "B" <<endl;
			}
			if(b==c)
			{
				cout << "A" <<endl;
			}
		}
	}
	return 0;
}