#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int a,t,i;

	cin >> t;

	for(i=1;i<=t;i++)
	{
		cin >> a;

		if(a<=10)
			cout << 0 << " " << a <<endl;
		else
			cout << a-10 << " " << 10 <<endl;

	}
}