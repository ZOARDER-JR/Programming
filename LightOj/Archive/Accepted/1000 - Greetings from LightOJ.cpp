#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int a,b,t,i;

	cin >> t;

	for(i=1;i<=t;i++)
	{
		cin >> a >> b;

		cout << "Case " << i << ": " << a+b <<endl;
	}
}