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

int main()
{
	LL n,d,temp,x,y,p;

	while(cin >> n)
	{
		d=(1+sqrt(1.0+8.0*n))/2;
		p=sqrt(1.0+8.0*n);

		if((p*p) == (8*n+1))
		{
			d--;
		}
		temp=(d*(d-1))/2;

		if(d%2 == 0)
		{
			x= d -(n-temp-1);
			y= 1 +(n-temp-1);
		}
		else
		{
			y= d -(n-temp-1);
			x= 1 +(n-temp-1);
		}

		cout << "TERM " << n << " IS " << y << "/" << x <<endl;
	}
	return 0;
}