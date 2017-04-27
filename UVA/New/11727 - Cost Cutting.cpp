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
#define for(i,t) for(int i=1 ;i <=t ;i++)

int main()
{
	int t, a, b, c;

	cin >> t;

	for (i, t)
	{
		cin >> a >> b >> c;

		if (a > b)
			swap(a, b);
		if (a > c)
			swap(a, c);
		if (b > c)
			swap(b, c);

		cout << "Case " << i << ": " << b << endl;
	}

	return 0;
}