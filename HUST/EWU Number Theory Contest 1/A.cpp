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

#define sf3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sf2(a,b) scanf("%d%d",&a,&b)
#define sf1(a) scanf("%d",&a)
#define sfch(a) scanf("%c",&a)
#define pf printf
#define sf scanf
#define getch ch=getchar()

#define for1(i,n) for(int i=1;i<=n;i++)
#define for0(i,n) for(int i=0;i<n;i++)
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
#define size 105

bool flag, flag1, flag2, flag3, flag4;

long long GCD(long long a, long long b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD(b, a%b);
	}
}

int main()
{
	int n;
	char ch;
	string str;
	long long num[size];
	sf1(n);
	ch = getch;

	while (n--)
	{
		int m = 0;

		getline(cin, str);
		istringstream is(str);

		while (is >> num[m++]);

		m--;

		long long mx = INFMN;

		for0(i, m)
		{
			for0(j, m)
			{
				if (i != j)
				{
					mx = max(mx, GCD(num[i], num[j]));
				}
			}
		}

		cout << mx << endl;
	}
	return 0;
}
