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
	int a, b, t;

	cin >> t;

	fort(i, t)
	{
		cin >> a >> b;

		int temp = b - a;

		temp = temp - ceil((temp*1.0) / 3.0)+1;
		
		if (a % 3 == 1 && b % 3 == 1)
		{
			temp--;
		}
		else if (a % 3 == 2 && b % 3 == 0)
		{
			temp++;
		}

		cout << "Case " << i << ": " << temp << endl;
	}
	return 0;
}