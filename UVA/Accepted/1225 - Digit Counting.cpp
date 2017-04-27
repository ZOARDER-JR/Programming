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
	int i,n,t;
	int num[10];
	string str;

	cin >> t;

	while(t--)
	{
		cin >> n;
		memset(num,0,sizeof(num));

		for(i=1;i<=n;i++)
		{
			int temp=i;

			while(temp!=0)
			{
				num[temp%10]++;
				temp/=10;
			}
		}

		for(i=0;i<10;i++)
		{
			if(i!=0)
				cout <<' ';

			cout << num[i];
		}

		cout <<endl;
	}
	return 0;
}