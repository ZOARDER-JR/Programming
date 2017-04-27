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
#define fx fixed()
#define pf printf
#define sf scanf
#define ff first
#define ss second
#define bgn begin()
#define end end()
#define emp empty()
#define fort(i,t) for(int i=1 ;i <=t ;i++)

int main()
{
	int h, u, d, f, i;
	double tdis, idis, fi;

	while (cin >> h >> u >> d >> f)
	{
		if (h == 0)
		{
			break;
		}

		fi = ((u*1.0*f) / 100.0);
		tdis = 0;

		for (i = 1;; i++)
		{
			idis = (u-(fi*(i - 1)) > 0 ? u-(fi*(i - 1)) : 0);
			tdis += idis;

			if (tdis > h)
			{
				cout << "success on day " << i << endl;
				break;
			}
			tdis -= d;
			if (tdis < 0)
			{
				cout << "failure on day " << i << endl;
				break;
			}
		}
	}
	return 0;
}