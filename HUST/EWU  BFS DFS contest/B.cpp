#define _CRT_SECURE_NO_WARNINGS

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
#include<deque>
#include<set>
#include<map>
#include<list>
#include<algorithm>
#include<utility>
#include<functional>

using namespace std;

#define INFMX 2147483647
#define INFMN -2147483647
#define pi acos(-1.0)
#define N 100001
#define size 20
#define psb push_back
#define ppb pop_back
#define psf push_front
#define ppf pop_front
#define clr clear()
#define sp setprecision
#define fx fixed
#define pf printf
#define sf scanf
#define ff first
#define ss second
#define bgn begin()
#define end end()
#define emp empty()
#define clr clear()
#define sz size()
#define fort(t) for(int o=1 ;o <=t ;o++)
#define max3(x, y, z) max(max(x, y), max(y, z))
#define reset(a) memset(a,0,sizeof(a));
#define assign(a,b) memset(a,b,sizeof(a));
#define range(r,c) ((r >=0 && r <row) && (c >=0 && c <column))

int X4[] = { 0, -1, 0, 1 };
int Y4[] = { -1, 0, 1, 0 };
int X8[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int Y8[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

list <int>  adj[size];
int row, column;
bool chk[size][size];
char grd[size][size];
int n;

void dfs(int x, int y);

int main()
{
	int t,px,py;
	char ch;

	cin >> t;

	ch = getchar();

	fort(t)
	{
		cin >> column >> row;
		reset(chk);
		
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				cin >> grd[i][j];

				if (grd[i][j] == '@')
				{
					px = i;
					py = j;
				}
			}
		}

		n = 1;

		dfs(px, py);

		cout << "Case " << o << ": " << n << endl;
	}
	return 0;
}

void dfs(int x, int y)
{
	chk[x][y] = true;
	for (int i = 0; i < 4; i++)
	{
		int a, b;

		a = x + X4[i];
		b = y + Y4[i];

		if (range(a,b) && grd[a][b] == '.' && !chk[a][b])
		{
			chk[a][b] = true;
			n++;
			dfs(a, b);
		}
	}
}
