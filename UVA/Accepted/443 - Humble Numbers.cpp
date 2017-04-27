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
#include<list>
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
	LL dp[5845];
	map<int,string> m;

	m[0]="th"; m[1]="st"; m[2]="nd"; m[3]="rd"; m[4]="th"; m[5]="th"; m[6]="th"; m[7]="th"; m[8]="th"; m[9]="th";

	int n;

	memset(dp,INF_MAX,sizeof(dp));

	dp[0]=1;

	for(int i=1;i<5842;i++)
	{
		LL min=INF_MAX;

		for(int j=0;j<i;j++)
		{
			if((dp[j]*2 > dp[i-1]) && (dp[j]*2 < min))
			{
				min=dp[j]*2;
			}
			if((dp[j]*3 > dp[i-1]) && (dp[j]*3 < min))
			{
				min=dp[j]*3;
			}
			if((dp[j]*5 > dp[i-1]) && (dp[j]*5 < min))
			{
				min=dp[j]*5;
			}
			if((dp[j]*7 > dp[i-1]) && (dp[j]*7 < min))
			{
				min=dp[j]*7;
			}		
		}

		dp[i]=min;
	}

	while(cin >> n)
	{
		if(n==0)
		{
			break;
		}

		cout << "The " << n << (n%100 > 3 && n%100 < 20 ? "th" : m[n%10]) << " humble number is " << dp[n-1] << "." <<endl;
	}
	return 0;
}