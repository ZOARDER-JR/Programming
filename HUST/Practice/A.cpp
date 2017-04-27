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
	int t, n,ary[10];

	cin >> t;

	fort(i, t)
	{
		memset(ary, 0, sizeof(ary));

		cin >> n;

		for (int j = 0; j <= n; j++)
		{
			int temp = j;

			while (temp != 0)
			{
				ary[temp % 10]++;
				temp /= 10;
			}
		}

		for (int j = 0; j < 10; j++)
		{
			if (j != 0)
			{
				cout << " ";
			}
			cout << ary[j];
		}

		cout << endl;

	}
	return 0;
}