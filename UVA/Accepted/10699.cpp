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

#define N 1000000

int main()
{	
	bool prime[N+1];
	int i,j,k,cnt,l;
	
	memset(prime,true,sizeof(prime));

	prime[0]=false;
	prime[1]=false;
	j=(int)sqrt(N*1.0);

	for (i=2; i<=j; i++)
	{
		if (prime[i])
		{
			for (k=i*i; k<=N; k+=i)
				prime[k]=false;
		}
	}

	while(cin >> k)
	{
		if(k == 0)
			break;

		cnt=0;
		if(prime[k])
		{
			cnt++;
		}
		j = (int)sqrt(k*1.0);

		for(i=2;i<=j;i++)
		{
			if(k%i==0)
			{
				l = k / i;
				if(prime[i])
				{
					cnt++;
				}

				if(prime[l] && l != i)
				{
					cnt++;
				}
			}
		}

		cout << k << " : " << cnt <<endl;
	}
	return 0;
}