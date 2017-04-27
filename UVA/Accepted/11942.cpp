#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool Sorted_a(int z[], int x)
{
	int i;
	bool flag=true;
	for(i=0;i<x;i++)
	{
		if(z[i]>z[i+1])
		{
			flag=false;
		}
	}

	return flag;
}

bool Sorted_d(int z[], int x)
{
	int i;
	bool flag=true;
	for(i=0;i<x;i++)
	{
		if(z[i]<z[i+1])
		{
			flag=false;
		}
	}

	return flag;
}

int main()
{
	int n,i;
	bool flag=true;
	int a[10];

	cin >>n;

	while(n--)
	{
		for(i=0;i<10;i++)
		{
			cin >>a[i];
		}

		if(flag)
		{
			cout << "Lumberjacks:" <<endl;
			flag=false;
		}

		if(Sorted_a(a,i-1) || Sorted_d(a,i-1))
		{
			cout << "Ordered" <<endl;
		}
		else
		{
			cout << "Unordered" <<endl;
		}
	}
	return 0;
}