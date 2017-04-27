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

	int n,k,i,j,temp,a[101];
	bool flag;

	while(cin >> n >> k)
	{
		for(i=1;i<=n;i++)
		{
			flag=false;

			for(j=1;j<=n;j++)
			{
				if(flag)
				{
					cout << " ";
				}

				if(i==j)
				{
					cout << k;
				}
				else
				{
					cout << 0;
				}

				flag=true;
						
			}
			cout << endl;
		}
	}
	return 0;
}