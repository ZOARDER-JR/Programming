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
#include<utility>
#include<iomanip>

using namespace std;

int main()
{
	long long n,lim,temp,cnt;
	int i=1;

	while(cin >> n >> lim)
	{
		if(n<0 && lim<0)
		{
			break;
		}

		cnt=1;temp=n;

		while(temp!=1)
		{

			if(temp%2==0)
			{
				temp/=2;
			}
			else
			{
				temp=(3*temp)+1;
			}

			if(temp>lim)
			{
				break;
			}

			cnt++;
		}

		cout << "Case " << i++ << ": A = " << n << ", limit = " << lim << ", number of terms = " << cnt <<endl;

	}
	return 0;
}