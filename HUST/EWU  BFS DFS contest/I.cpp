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
#define size 1100

#define psb(x) push_back(x)
#define psf(x) push_front(x)
#define ppb pop_back
#define ppf pop_front
#define pop pop()
#define frnt front()
#define bgn begin()
#define end end()
#define emp empty()
#define clr clear()
#define sz size()
#define sp setprecision
#define fx fixed
#define ff first
#define ss second

#define reset(a) memset(a,0,sizeof(a))
#define assign(a,b) memset(a,b,sizeof(a))

#define max3(x, y, z) max(max(x, y), max(y, z))
#define range(r,c) ((r >=0 && r <row) && (c >=0 && c <column))

#define sf3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sf2(a,b) scanf("%d%d",&a,&b)
#define sf1(a) scanf("%d",&a)
#define sfch(a) scanf("%c",&a)
#define pf printf
#define sf scanf
#define getch ch=getchar()

#define for1(i,n) for(int i=1;i<=n;i++)
#define for0(i,n) for(int i=0;i<n;i++)
#define fort(t) for(int o=1 ;o <=t ;o++)
	

int X4[] = { 0, -1, 0, 1 };
int Y4[] = { -1, 0, 1, 0 };
int X8[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int Y8[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

bool flag, flag1, flag2, flag3, flag4;

vector<int> PF;
vector<int>::iterator it;
int dis[size];
bool chk[size];

void pfactor(int a);

int main()
{
	int t, n, m;

	sf1(t);

	fort(t)
	{
		reset(dis);
		reset(chk);

		sf2(n, m);
		
		if (n == m)
		{
			pf("Case %d: %d\n", o, 0);
			continue;
		}

		queue<int> Q;

		dis[n] = 0;
		chk[n] = true;
		flag = false;

		Q.push(n);

		while (!Q.emp)
		{
			int u = Q.frnt;
			Q.pop;

			if (u == m)
			{
				flag = true;
				break;
			}
			else if (u > m)
				break;

			PF.clr;
			pfactor(u);

			for (it = PF.bgn; it != PF.end; it++)
			{
				int temp = *it+u;
				if (temp <= m)
				{
					if (!chk[temp])
					{
						dis[temp] = dis[u] + 1;
						chk[temp] = true;
						Q.push(temp);
					}
				}
			}

		}

		if (flag)
		{
			pf("Case %d: %d\n", o, dis[m]);
		}
		else
		{
			pf("Case %d: %d\n", o, -1);
		}
	}
	return 0;
}

void pfactor(int a)
{
	int temp = a;

	if (a <= 2)
		return;

	if (a % 2 == 0)
		PF.psb(2);

	while (a % 2 == 0)
		a /= 2;

	for (int i = 3; i <= sqrt(temp*1.0); i += 2)
	{
		if (a%i == 0)
			PF.psb(i);

		while (a%i == 0)
			a /= i;
	}

	if (a > 2 && a < temp)
		PF.psb(a);
}