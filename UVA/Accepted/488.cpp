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
	int a,f,i,j,k,n,x;
	bool flag;

	cin >> n;

	for(x=1;x<=n;x++)
	{
		cin >> a >>f;

		for(k=1;k<=f;k++)
		{
			flag=true;

			for(i=1;i<=a;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout << i;
				}
				cout <<endl;
			}
			for(i=i-2;i>0;i--)
			{
				for(j=1;j<=i;j++)
				{
					cout << i;
				}
				cout <<endl;
			}
			if(k==f && x==n)
			{
				flag=false;
			}
			if(flag)
			{
				cout << endl;
			}
		}
	}
	return 0;
}