#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<climits>
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

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<double> VD;
typedef vector<char> VC;
typedef vector<string> VS;
typedef list<int> LI;
typedef map<int, int> MII;
typedef map<string, int> MSI;
typedef map<int, string> MIS;
typedef pair<int,int> PII;

#define psb(x) push_back(x)
#define psf(x) push_front(x)
#define ppb pop_back()
#define ppf pop_front()
#define pop pop()
#define front front()
#define back back()
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

#define max3(x, y, z) max(x, max(y, z))
#define min3(x, y, z) min(x, min(y, z))
#define max4(w, x, y, z) max(w, max(x, max(y,z)))
#define min4(w, x, y, z) min(w, min(x, min(y, z)))

#define range(r,c) ((r >=0 && r <row) && (c >=0 && c <column))

#define sfi3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sfll3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define sfd3(a,b,c) scanf("%lf%lf%lf",&a,&b,&c)

#define sfi2(a,b) scanf("%d%d",&a,&b)
#define sfll2(a,b) scanf("%lld%lld",&a,&b)
#define sfd2(a,b) scanf("%lf%lf",&a,&b)

#define sfi(a) scanf("%d",&a)
#define sfll(a) scanf("%lld",&a)
#define sfd(a) scanf("%lf",&a)

#define sfch(a) scanf("%c",&a)

#define pf printf
#define sf scanf
#define getch char ch=getchar()

#define loopl(r,n) for(int i = r; i < n; i++)
#define loope(r,n) for(int i = r ; i <= n ; i++)
#define test(t) for(int o = 1 ; o <= t ; o++)
#define printcase printf("Case %d: ",o);
#define newline printf("\n");

/*int X4[] = { 0, -1, 0, 1 };
int Y4[] = { -1, 0, 1, 0 };
int X8[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int Y8[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int X3D6[] = { 0, 0, -1, 1, 0, 0 };
int Y3D6[] = { -1, 1, 0, 0, 0, 0 };
int Z3D6[] = { 0, 0, 0, 0, -1, 1 };

bool flag, flag1, flag2, flag3;

int row, column;*/

#define INFMX 2139062143
#define INFMN -2139062144
#define pi 2*acos(0.0)
#define N 1000000001

bool chk[N];

bool isvalid(int a, int b)
{
	loope(a, a + b - 1)
	{
		if (chk[i])
			return false;
	}

	return true;
}
int main()
{
	int n, lchk,s,d;

	vector<pair <int, int> > v;

	while (sfi(n) == 1)
	{
		reset(chk);
		v.clr;

		lchk = 1;

		loopl(0, n)
		{
			sfi2(s,d);

			if (isvalid(s, d))
			{
				v.psb(make_pair(s, s + d - 1));

				if (lchk > s + d)
				{
					lchk = s + d;
				}

				fill(chk + s, chk + s + d, 1);
			}
			else
			{
				while(!isvalid(lchk, d))
				{
					lchk++;
				}

				v.psb(make_pair(lchk, lchk + d - 1));

				fill(chk + lchk, chk + lchk + d, 1);
				lchk = lchk + d;



			}
		}

		loopl(0, v.sz)
		{
			pf("%d %d", v[i].ff, v[i].ss);
			newline;
		}
	}
	return 0;
}
