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

int a[5];
bool calculate(int n, long long t);
int main()
{
	bool flag;

	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4])
	{
		if (a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0)
			break;

		sort(a, a + 5);
		do
		{
			flag = calculate(1, a[0]);

			if (flag)
				break;
		} while (next_permutation(a, a + 5));

		if (flag)
		{
			cout << "Possible" << endl;
		}
		else
		{
			cout << "Impossible" << endl;
		}
	}
	
	return 0;
}

bool calculate(int n, long long t)
{
	if (n == 5 && t==23)
	{
		return true;
	}
	else if (n == 5)
	{
		return false;
	}
	else
	{
		return (calculate(n + 1, t + a[n]) || calculate (n + 1, t - a[n]) ||calculate( n + 1, t * a[n]));
	}
}