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

int matrix[101][101];
int num[101][101];

int find_m(int a,int b,int c);

int main()
{
	int n,max,i,j,temp;

	while(cin >> n)
	{
		for(i=0;i<=n;i++)
		{
			matrix[0][i]=matrix[i][0]=0;
		}

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin >> num[i][j];
			}
		}

		max=0;

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				matrix[i][j]=(matrix[i][j-1]+matrix[i-1][j]+num[i][j]+matrix[i-1][j-1]);

				if(matrix[i][j] < max)
				{
					matrix[i][j]=max;
				}
			}
		}

		cout << matrix[n][n] <<endl;
	}
	return 0;
}

int find_m(int a,int b,int c)
{
	int temp;

	if(a > b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(a > c)
	{
		temp=a;
		a=c;
		c=temp;
	}
	if(b > c)
	{
		temp=b;
		b=c;
		c=temp;
	}

	return c;
}