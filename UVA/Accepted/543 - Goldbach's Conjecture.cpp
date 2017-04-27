#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<utility>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000001

typedef long long LL;

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

bool primes[N];

void sieve();

int main()
{
	int n,i,n1,n2;

	memset(primes,true,sizeof(primes));
	sieve();

	while(cin >> n)
	{
		if(n==0)
		{
			break;
		}

		i=2;
		while(i<= n/2)
		{
			if(primes[i])
			{
				n1=i;
				n2=n-n1;
				if(primes[n2])
				{
					if(n1+n2 == n)
					{
						cout << n << " = " << n1 << " + " << n2 <<endl;
						break;
					}
				}
			}
			i++;
		}
	}
	return 0;
}

void sieve()
{
	int i,j;

	primes[0]=false;
	primes[1]=false;

	for(i=2;i<=1000;i++)
	{
		for(j=i*i;j<=1000000;j+=i)
		{
			primes[j]=false;
		}
	}
}