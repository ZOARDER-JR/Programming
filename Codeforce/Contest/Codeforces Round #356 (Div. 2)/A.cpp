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
	int ary[101], a, b, c, d, e;
	int cnt;

	while (cin >> a >> b >> c >> d >> e)
	{
		memset(ary, 0, sizeof(ary));

		cnt = a + b + c + d + e;

		ary[a]++; ary[b]++; ary[c]++; ary[d]++; ary[e]++;

		int max = 0;

		for (int i = 1; i <= 100; i++)
		{
			if (ary[i] > 1 && ary[i] <= 3)
			{
				if (ary[i] * i > max)
				{
					max = ary[i] * i;
				}
			}
			else if (ary[i] > 3)
			{
				if (i * 3 > max)
				{
					max = i * 3;
				}
			}
		}

		cout << cnt - max << endl;
	}
	return 0;
}
