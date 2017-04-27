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

int is_sq(int a);

int main()
{
	int n,x,y,k,temp;

	while(cin >> n)
	{
		if(n==0)
		{
			break;
		}

		k=is_sq(n);
		if(k==0)
		{
			temp=sqrt(n*1.0);

			if(temp%2 == 0)
			{
				x=temp;
				y=1;
			}
			else
			{
				x=1;
				y=temp;
			}
		}
		else if(k%2 == 0)
		{
			temp= n-(k*k);

			if(temp <= k+1)
			{
				x=k+1;
				y=temp;
			}
			else
			{
				temp-=(k+1);

				x= k+1-temp;
				y=k+1;
			}
		}
		else
		{
			temp= n-(k*k);

			if(temp <= k+1)
			{
				y=k+1;
				x=temp;
			}
			else
			{
				temp-=(k+1);

				y= k+1-temp;
				x=k+1;
			}
		
		}

		cout << x << " " << y <<endl;
	}
	return 0;
}

int is_sq(int a)
{
	int temp;

	temp=sqrt(a*1.0);

	if(temp*temp == a)
	{
		return 0;
	}

	return temp;
}