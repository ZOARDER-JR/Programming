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

int GCD(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return GCD(b,a%b);
	}
}

int main()
{
	int n,g,i,j;

	while(cin >> n && n!=0)
	{
		g=0;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				g+=GCD(i,j);
			}
		}

		cout << g <<endl;
	}
	return 0;
}