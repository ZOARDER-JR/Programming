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
#define assignmx(a) memset(a,127,sizeof(a))
#define assignmn(a) memset(a,128,sizeof(a))

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

#define INFMX 2139062143
#define INFMN -2139062144
#define pi acos(-1.0)
#define N 100001
#define size 100005

int maxd1[size];
int maxd2[size];
bool chk[size];

list<int> adj[size];

int dfs(int a);
int mx;
int cost[size];
vector<int> V;

int mxv;

int main()
{
	int t, m, n, q, a, b,mxv2,qr;

	sf1(t);

	fort(t)
	{
		sf2(n, m);

		for1(i, n)
			adj[i].clr;
		V.clr;

		for1(j, m)
		{
			sf2(a, b);

			adj[a].psb(b);
			adj[b].psb(a);

			V.psb(a);
		}

		reset(maxd1);
		reset(maxd2);
		reset(chk);
		assignmx(cost);

		for0(j, m)
		{
			mxv = 0;
			mx = 0;

			if (!chk[j])
				dfs(V[j]);

			mx++;

			cost[0] = 0;

			for1(k, mxv)
			{
				int temp=INFMX;
				if (k <= mx)
				{
					temp = k - 1;
				}
				else if (k > mx && k <= mxv)
				{
					temp = mx + 2 * (k - mx) - 1;
				}

				cost[k] = min(cost[k], temp);
			}
		}
		
		sf1(q);

		pf("Case %d:\n", o);

		for0(i, q)
		{
			sf1(qr);

			if (cost[qr]== 2139062143)
			{
				pf("impossible\n");
			}
			else
			{
				pf("%d\n", cost[qr]);
			}
		}
	}
	return 0;
}

int dfs(int a)
{
	chk[a] = true;
	mxv++;

	int wgt;

	list<int>::iterator it;

	for (it = adj[a].bgn; it != adj[a].end; it++)
	{
		if (!chk[*it])
		{
			wgt = 1 + dfs(*it);

			if (wgt >= maxd1[a])
			{
				maxd2[a] = maxd1[a];
				maxd1[a] = wgt;

			}
			else if (wgt > maxd2[a])
				maxd2[a] = wgt;
		}
	}

	mx = max(maxd1[a] + maxd2[a], mx);

	return maxd1[a];
}