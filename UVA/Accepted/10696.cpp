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
	int n;

	while(cin >>n && n!=0)
	{
		if(n<=100)
		{
			cout << "f91(" << n << ") = 91" <<endl;
		}
		else
		{
			cout << "f91(" << n << ") = " << n-10 <<endl;
		}
	}
	return 0;
}