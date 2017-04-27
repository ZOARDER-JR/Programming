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

struct bsp
{
	int x;
	int y;
};

int main()
{
	int t, i, j,cnt,s1,s2;
	char brd[8][8];
	bool flag;
	bsp b1, b2;

	cin >> t;

	while (t--)
	{
		cnt = 0; flag = false;
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				cin >> brd[i][j];

				if (brd[i][j] == 'B' && cnt == 0)
				{
					b1.x = i;
					b1.y = j;

					cnt++;
				}
				else if (brd[i][j] == 'B')
				{
					b2.x = i;
					b2.y = j;
				}
			}
		}

		s1 = fabs(b1.x*1.0 - b2.x*1.0);
		s2 = fabs(b1.y*1.0 - b2.y*1.0);

		if (s1==s2)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}