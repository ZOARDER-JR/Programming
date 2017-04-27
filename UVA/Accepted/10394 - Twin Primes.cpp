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
#define N 20000001
#define m 100001

typedef long long LL;

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

bool primes[N];
int p[m];
void sieve();
void make_pair();

int main()
{
	int n;

	memset(primes,true,sizeof(primes));

	sieve();
	make_pair();

	while(scanf("%d",&n)==1)
	{
		printf("(%d, %d)\n",p[n-1],p[n-1]+2);
	}
	return 0;
}

void sieve()
{
	int i,j;

	primes[0]=false;
	primes[1]=false;

	for(i=2;i<=4500;i++)
	{
		if(primes[i])
		{
			for(j=2*i;j<=20000000;j+=i)
			{
				primes[j]=false;
			}
		}
	}
}

void make_pair()
{
	int i,j=0;

	p[j]=3;
	j++;

	for(i=5;i<20000000;i+=6)
	{
		if(primes[i] && primes[i+2])
		{
			p[j]=i;
			j++;
		}

		if(j>=100000)
		{
			return;
		}
	}
}
