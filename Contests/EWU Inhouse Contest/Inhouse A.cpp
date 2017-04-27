#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<sstream>
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
#include<functional>


using namespace std;

#define psb(x) push_back(x)
#define psf(x) push_front(x)
#define ppb pop_back
#define ppf pop_front
#define pop pop()
#define front front()
#define bgn begin()
#define end end()
#define emp empty()
#define clr clear()
#define sz size()
#define sp setprecision
#define fx fixed
#define ff first
#define ss second

#define reset(a) memset(a,0,sizeof(a))
#define assign(a,b) memset(a,b,sizeof(a))
#define assignmx(a) memset(a,127,sizeof(a))
#define assignmn(a) memset(a,128,sizeof(a))

#define max3(x, y, z) max(max(x, y), max(y, z))
#define range(r,c) ((r >=0 && r <row) && (c >=0 && c <column))

#define sfi3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sfll3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define sfd3(a,b,c) scanf("%lf%lf%lf",&a,&b,&c)

#define sfi2(a,b) scanf("%d%d",&a,&b)
#define sfll2(a,b) scanf("%lld%lld",&a,&b)
#define sfd2(a,b) scanf("%lf%lf",&a,&b)

#define sfi1(a) scanf("%d",&a)
#define sfll1(a) scanf("%lld",&a)
#define sfd1(a) scanf("%lf",&a)

#define sfch(a) scanf("%c",&a)

#define pf printf
#define sf scanf
#define getch ch=getchar()

#define for1(i,n) for(long long i=1;i<=n;i++)
#define for0(i,n) for(long long i=0;i<n;i++)
#define fort(t) for(int o=1 ;o <=t ;o++)


int X4[] = { 0, -1, 0, 1 };
int Y4[] = { -1, 0, 1, 0 };
int X8[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int Y8[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int X3D6[] = { 0, 0, -1, 1, 0, 0 };
int Y3D6[] = { -1, 1, 0, 0, 0, 0 };
int Z3D6[] = { 0, 0, 0, 0, -1, 1 };

#define INFMX 2139062143
#define INFMN -2139062144
#define pi acos(-1.0)
#define N 100001
#define size 32001

bool flag, flag1, flag2, flag3, flag4;

int main()
{
	int t, n, m;

	sfi1(t);
	
	while (t--)
	{
		sfi2(n, m);
		int i = 1;

		int quo, rem;

		quo = (n*1.0) / (m*1.0);
		rem = n%m;

		cout << quo;

		if (rem != 0)
			cout << ".";

		while (rem != 0)
		{
			rem *= 10;

			if (rem < m)
				cout << 0;
			else if (i == 100 && ((rem * 10 * 1.0) / (m*1.0)) >= 5)
			{
				cout << (int)((rem*1.0) / (m*1.0)) + 1;
				break;
			}
			else
				cout << (int)((rem*1.0) / (m*1.0));

			rem %= m;

			i++;
		}

		cout << endl;

	}
	return 0;
}
