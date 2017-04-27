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
	int n;
	string str;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}

		int cnt = 0;
		str.clr;
		int temp = n;

		while (temp > 0)
		{
			str.push_back((temp % 2)+'0');
			if (temp % 2 == 1)
				cnt++;

			temp /= 2;
		}

		reverse(str.bgn,str.end);

		cout << "The parity of " << str << " is " << cnt << " (mod 2)." << endl;
	}
	return 0;
}
