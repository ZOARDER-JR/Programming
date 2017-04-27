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

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

long long lcm(int a, int b)
{
	long long lc;

	lc = (a*b*1.0) / gcd(a, b)*1.0;

	return lc;
}


int main()
{
	long long n, a, b, p, q,tc,gc,tr,tb,ta;

	while (cin >> n >> a >> b >> p >> q)
	{
		gc = lcm(a, b);

		tr = (n*1.0) / (a*1.0);
		tb = (n*1.0) / (b*1.0);
		ta = (n*1.0) / (gc*1.0);
		tc = (ta*(p > q ? p : q)) + (tr - ta)*p + (tb - ta)*q;
		

		cout << tc << endl;
	}

	return 0;
}
