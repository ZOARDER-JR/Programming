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
#define sz size()
#define fort(i,t) for(int i=1 ;i <=t ;i++)

int main()
{
	int n, p, q;
	multimap<int, int> M;
	multimap<int, int>::iterator it;
	bool flag;

	while (cin >> n)
	{
		flag = false;

		while (n--)
		{
			cin >> p >> q;

			M.insert(pair<int, int>(p, q));
		}

		for (it=M.bgn; ++it != M.end; )
		{
			it--;
			if (it++->second > it->second)
			{
				flag = true;
			}
		}

		if (flag)
		{
			cout << "Happy Alex" << endl;
		}
		else
		{
			cout << "Poor Alex" << endl;
		}

		M.clr;
	}
	return 0;
}