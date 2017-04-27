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
	int t,n,i,j,k,temp;
	int r[100000];

	cin >> t;

	for(i=1;i<=t;i++)
	{
		cin >> n; 
		r[0]=0;	k=0;

		for(j=1;j<=n;j++)
		{
			cin >> r[j];
		}

		for(j=n;j>0;j--)
		{
			if(r[j]-r[j-1]==k)
			{
				k++;
			}
			else if(r[j]-r[j-1]>k)
			{
				k=r[j]-r[j-1];
			}
		}
		
		cout << "Case " << i << ": " << k <<endl;
	}
	return 0;
}