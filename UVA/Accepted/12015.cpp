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

int main()
{
	int n,max,i,j;
	int a[10];
	string w[10],temp;

	cin >> n;

	for(i=1;i<=n;i++)
	{
		max=0;

		for(j=0;j<10;j++)
		{
			cin >> w[j] >> a[j];

			if(a[j]>max)
			{
				max=a[j];
			}
		}

		cout << "Case #" << i << ":" <<endl;

		for(j=0;j<10;j++)
		{
			if(a[j]==max)
			{
				cout << w[j] <<endl;
			}
		}

	}

	return 0;
}