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
#define A 1234567
#define B 123456
#define C 1234

int main()
{
	int n;
	bool flag;
	while (cin >> n)
	{
		flag = false;

		int a = (int)n*1.0 / A*1.0;

		for (int i = 0; i <= a; i++)
		{
			int b = (int)(n*1.0 / B*1.0);

			for (int j = 0; j <= b; j++)
			{
				int c = (n - (i*A) - (j*B));

				if (c >= 0 && c % C == 0)
				{
					flag = true;
					break;
				}
			}

			if (flag)
				break;
		}

		if (flag)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}