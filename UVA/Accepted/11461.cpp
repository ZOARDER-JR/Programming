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
	int a,b,i,j,cnt;

	long long x[100000];

	while(cin >> a >> b && a!=0 && b!=0)
	{
		for(i=0;i<b;i++)
		{
			x[i]=(i+1)*(i+1);
		}
		
		j=cnt=0;

		while(x[j]<a)
		{
			j++;
		}

		while(x[j]<=b)
		{
			cnt++;
			j++;
		}

		cout << cnt <<endl;
	}
	return 0;
}