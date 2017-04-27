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

int main()
{
	int k, d1, d2, x, y;

	while (cin >> k)
	{
		if (k == 0)
		{
			break;
		}
		cin >> d1 >> d2;
		while (k--)
		{
			cin >> x >> y;

			if (x == d1 || y == d2)
				cout << "divisa" << endl;
			else if (x < d1 && y > d2)
				cout << "NO" << endl;
			else if (x > d1 && y > d2)
				cout << "NE" << endl;
			else if (x > d1 && y < d2)
				cout << "SE" << endl;
			else
				cout << "SO" << endl;
		}
	}
	return 0;
}