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

int check(string s1, string s2)
{
	int cnt = 0;

	for (int j = 0; j < s1.size(); j++)
	{
		if (s1[j] != s2[j])
			cnt++;
	}

	return cnt;
}
int main()
{
	string s, str[1000];
	vector<string> V;
	int t, n,r;

	cin >> t;

	fort(i, t)
	{
		cin >> n;

		for (int j = 0; j < n; j++)
		{
			cin >> str[j];
		}

		cin >> s;

		cout << "Case " << i << ":" << endl;

		for (int j = 0; j < n; j++)
		{
			r = check(s, str[j]);

			if (r <= 1)
				cout << str[j] << endl;
		}
	}
	return 0;
}