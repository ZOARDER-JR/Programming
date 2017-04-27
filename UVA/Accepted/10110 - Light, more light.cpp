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
#include<map>
#include<algorithm>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000

typedef long long LL;

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

int main()
{
	LL n,m;

	while(cin >> n)
	{
		if(n==0)
		{
			break;
		}

		m=sqrt(n*1.0);

		if((m*m)==n)
		{
			cout << "yes" <<endl;
		}
		else
		{
			cout << "no" <<endl;
		}
	}
	return 0;
}