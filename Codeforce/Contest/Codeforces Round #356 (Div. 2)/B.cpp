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
#define fort(i,t) for(int i=1 ;i <=t ;i++)

int main()
{
	int ary[101], n, cnt, a,dis;

	while (cin >> n >> a)
	{
		memset(ary, 0, sizeof(ary));
		cnt = 0;

		for (int i = 1; i <= n; i++)
			cin >> ary[i];

		for (int i = 1; i <= n; i++)
		{
			dis = a - i;

			if (a + dis <= n && a+dis >=1 && ary[i] == ary[dis + a])
			{
				cnt +=ary[i];
			}
			else if (a+dis > n || a+dis <1)
			{
				cnt += ary[i];
			}
		}

		cout << cnt << endl;

	}
	return 0;
}
