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
#define pi acos(-1*0)
#define N 1000000

typedef long long LL;

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

char str[101][101];
int n,m;

int chk_adj(int a,int b);

int main()
{
	int i=1;

	while(cin >> n >> m)
	{

		if(n==0 && m==0)
		{
			break;
		}

		int j,k;

		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				cin >> str[j][k];
			}
		}

		if(i>1)
		{
			cout << endl;
		}

		cout << "Field #" << i++ << ":" <<endl;

		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				if(str[j][k] != '*')
				{
					cout << chk_adj(j,k);
				}
				else
				{
					cout << "*";
				}
			}
			
			cout << endl;
		}

	}
	return 0;
}

int chk_adj(int a,int b)
{
	int cnt=0;

	if(a-1 > -1 && b-1 > -1)
	{
		if(str[a-1][b-1] == '*')
		{
			cnt++;
		}
	}
	if(a-1 > -1)
	{
		if(str[a-1][b] == '*')
		{
			cnt++;
		}
	}
	if(a-1 > -1 && b+1 < m)
	{
		if(str[a-1][b+1] == '*')
		{
			cnt++;
		}
	}
	if(b-1 > -1)
	{
		if(str[a][b-1] == '*')
		{
			cnt++;
		}
	}
	if(b+1 < m)
	{
		if(str[a][b+1] == '*')
		{
			cnt++;
		}
	}
	if(a+1 < n && b-1 > -1)
	{
		if(str[a+1][b-1] == '*')
		{
			cnt++;
		}
	}
	if(a+1 < n)
	{
		if(str[a+1][b] == '*')
		{
			cnt++;
		}
	}
	if(a+1 <n && b+1 < m)
	{
		if(str[a+1][b+1] == '*')
		{
			cnt++;
		}
	}

	return cnt;
}