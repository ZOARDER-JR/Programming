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
#define emp empty()
#define sz size()
#define fort(t) for(int o=1 ;o <=t ;o++)
#define size 20005

list<int> adj[size];
int colr[size];

int main()
{
	int t, e;

	cin >> t;

	fort(t)
	{
		cin >> e;
		memset(colr, 0, sizeof(colr));
		int mx = 0;

		int b,r;

		for (int i = 0; i < size; i++)
		{
			adj[i].clear();
		}
		for (int i = 0;i<e;i++)
		{
			int u, v;

			cin >> u >> v;

			adj[u].push_back(v);
			adj[v].push_back(u);
		}

		for (int i = 0; i < size; i++)
		{
			if (!adj[i].empty() && colr[i] == 0 )
			{
				queue<int> Q;
				b = 0; r = 0;
				Q.push(i);
				colr[i] = 1;
				r++;

				while (!Q.empty())
				{
					int u = Q.front();
					Q.pop();

					list<int>::iterator it;

					for (it = adj[u].begin(); it != adj[u].end(); it++)
					{
						if (colr[*it] == 0)
						{
							Q.push(*it);

							if (colr[u] == 1)
							{
								colr[*it] = 2;
								b++;
							}
							else if (colr[u] == 2)
							{
								colr[*it] = 1;
								r++;
							}
						}
					}
				}

				mx += max(b, r);

			}
		}

		cout << "Case " << o << ": " << mx << endl;
	}
	return 0;
}