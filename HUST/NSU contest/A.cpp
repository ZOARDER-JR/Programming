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

using namespace std;

#define INFMX 2147483647
#define INFMN -2147483647
#define pi acos(-1.0)
#define N 100001
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
#define sz size()
#define fort(t) for(int o=1 ;o <=t ;o++)

map<int, list<int>> adj;
map<int, list<int>>::iterator it;
int clr[20001];

void dfs_vst(int u);

int main()
{
	int e, t;

	cin >> t;

	fort(t)
	{
		adj.clr;
		memset(clr, 0, sizeof(clr));

		cin >> e;

		while (e--)
		{
			int u, v;

			cin >> u >> v;

			it = adj.find(u);

			if (it != adj.end)
			{
				it->ss.push(v);
			}
			else
			{
				list<int> l;

				l.pust(v);

				adj.insert(pair<int, list<int>>(u, l));
			}
		}

		int cnt = 0;

		for (it = adj.bgn; it != adj.end;it++)
		{
			if (clr[it->ff] == 0)
			{
				cnt++;
				dfs_vst(it-> > ff);
			}
		}

		cout << "Case " << o << ": " << e-cnt << endl;
	}
	return 0;
}

void dfs_vst(int u)
{
	clr[u] == 1;

	auto i,j;

	i = adj.find(u);

	for (j = i->ss.bgn; j != i->ss.end; j++)
	{
		if (clr[*j] == 0)
		{
			dfs_vst(*j);
		}
	}

	clr[u] == 2;
}