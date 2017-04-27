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
	int a, b,la,lb,ra,rb,ma,mb;
	double vn, vr;
	bool flag;
	string str;

	while (cin >> a >> b)
	{
		if (a == 1 && b == 1)
			break;

		str.clr;
		la = 0; ra = 1; lb = 1; rb = 0; flag = false;
		vn = (a*1.0) / (b*1.0);

		while (!flag)
		{
			ma = la + ra;
			mb = lb + rb;
			if (ma==a && mb==b)
			{
				flag = true;
				break;
			}

			vr = (ma*1.0) / (mb*1.0);

			if (vn < vr)
			{
				str.push_back('L');
				ra = ma; rb = mb;
			}
			else if (vn > vr)
			{
				str.push_back('R');
				la = ma; lb = mb;
			}
		}

		cout << str << endl;
	}
	return 0;
}