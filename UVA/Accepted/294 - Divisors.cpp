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
#define N 1000000

typedef long long LL;

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

int count_d(int a);

int main()
{
	int t,u,l,i,mx,mx_n;

	cin >> t;

	while(t--)
	{
		cin >> l >> u;

		mx=0;

		for(i=l;i<=u;i++)
		{
			int temp=count_d(i);

			if(temp > mx)
			{
				mx=temp;
				mx_n=i;
			}
		}

		cout << "Between " << l << " and " << u << ", " << mx_n << " has a maximum of " << mx << " divisors." <<endl;
	}
	return 0;
}

int count_d(int a)
{
	int count,pw,i;

	count=1;

	for(i=2;i<=sqrt(a*1.0);i=(i==2?3:i+2))
	{
		pw=0;

		while(a%i == 0)
		{
			pw++;
			a/=i;
		}

		count*= (pw+1);
	}

	if(a != 1)
	{
		count *= 2;
	}

	return count;
}