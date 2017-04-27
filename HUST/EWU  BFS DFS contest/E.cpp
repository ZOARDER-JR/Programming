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
#define size 30005
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

int maxd1[size];
int maxd2[size];
bool chk[size];
list <pair<int,int> >  adj[size];

int mx;

int dfs(int a);

int main()
{
	int t, node;

	cin >> t;

	fort(t)
	{
		cin >> node;
		mx = 0;
		reset(maxd1);
		reset(maxd2);
		reset(chk);
		
		for (int i = 0; i < node; i++)
		{
			adj[i].clr;
		}

		for (int i = 1; i < node; i++)
		{
			int u, v, w;

			cin >> u >> v >> w;

			adj[u].push_back(make_pair(v, w));
			adj[v].push_back(make_pair(u, w));
		}

		dfs(0);

		cout << "Case " << o << ": " << mx << endl;

	}
	return 0;
}

int dfs(int a)
{
	chk[a] = true;
	list <pair<int, int> >::iterator it;
	int wgt;

	for (it = adj[a].bgn; it != adj[a].end; it++)
	{
		if (!chk[it->first])
		{
			wgt = it->second + dfs(it->first);

			if (wgt >= maxd1[a])
			{
				maxd2[a] = maxd1[a];
				maxd1[a] = wgt;
			}
			else if (wgt > maxd2[a])
			{
				maxd2[a] = wgt;
			}
		}
	}

	mx = max(maxd1[a] + maxd2[a], mx);
	return maxd1[a];
}