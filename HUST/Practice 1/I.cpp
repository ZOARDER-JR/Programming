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
	long long a, temp, cnt, y;

	while (cin >> a)
	{
		if (a == 0)
			break;
		temp = a*(sqrt(2.0) - 1);
		cnt = 0;

		for (int i = (a % 2 == 0 ? 2 : 1); i <= temp; i+=2)
		{
			if ((a*a) % i == 0)
			{
				y = (a*a) / i;
				if ((y - i) % 2 == 0)
				{
					cnt++;
				}
			}
		}

		cout << cnt << endl;
	}
	return 0;
}