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

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<string> vs;
typedef list<int> li;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<int, string> mis;
typedef pair<int,int> pii;

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

#define _3SFI(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define _3SFLL(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define _3SFD(a,b,c) scanf("%lf%lf%lf",&a,&b,&c)

#define _2SFI(a,b) scanf("%d%d",&a,&b)
#define _2SFLL(a,b) scanf("%lld%lld",&a,&b)
#define _2SFD(a,b) scanf("%lf%lf",&a,&b)

#define _SFI(a) scanf("%d",&a)
#define _SFLL(a) scanf("%lld",&a)
#define _SFD(a) scanf("%lf",&a)

#define _SFCH(a) scanf("%c",&a)

#define PF printf
#define SF scanf
#define getch ch=getchar()

#define FORE(i,n) for(int i = 1; i <= n; i++)
#define FORL(i,n) for(int i = 0; i < n; i++)
#define FORI(i,r,n,v) for(int i = r ; i <= n ; i+=v)
#define FORT(t) for(int o = 1 ; o <= t ; o++)

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

bool flag, flag1, flag2, flag3;

int row, column;

int main()
{
	int n, a, temp, cnt;
	vector<int> v;

	while (_2SFI(n, a) == 2)
	{
		v.clr;
		v.psb(a);

		FORE(i, n)
		{
			_SFI(temp);
			v.psb(temp);
		}

		sort(v.bgn, v.end);

		int s;

		FORL(i, v.sz)
		{
			if (v[i] == a)
			{
				s = i;
				break;
			}
		}
		
		int dis1, dis2, dis3, dis4;

		dis1 = dis2 = dis3 = dis4 = 0;

		if (s == 0)
		{
			FORL(i, v.sz - 2)
			{
				dis1 += v[i + 1] - v[i];
			}

			PF("%d\n", dis1);
		}
		else if (s == v.sz - 1)
		{
			for (int i = v.sz - 1;i >=2;i--)
			{
				dis1 += v[i] - v[i-1];
			}

			PF("%d\n", dis1);
		}
		else
		{
			for (int i = s - 1; i >= 1; i--)
			{
				dis1 += v[i + 1] - v[i];
			}

			dis1 += v[s + 1] - v[1];

			for (int i = s + 2; i <= v.sz - 1; i++)
			{
				dis1 += v[i] - v[i - 1];
			}

			for (int i = s + 1; i <= v.sz - 1; i++)
			{
				dis2 += v[i] - v[i - 1];
			}

			dis2 += v[v.sz - 1] - v[s - 1];

			for (int i = s - 2; i >= 1; i--)
			{
				dis2 += v[i + 1] - v[i];
			}
			//
			for (int i = s - 1; i >= 0; i--)
			{
				dis3 += v[i + 1] - v[i];
			}

			dis3 += v[s + 1] - v[0];

			for (int i = s + 2; i <= v.sz - 2; i++)
			{
				dis3 += v[i] - v[i - 1];
			}

			for (int i = s + 1; i <= v.sz - 2; i++)
			{
				dis4 += v[i] - v[i - 1];
			}

			dis4 += v[v.sz - 2] - v[s - 1];

			for (int i = s - 2; i >= 0; i--)
			{
				dis4 += v[i + 1] - v[i];
			}

			PF("%d\n", min4(dis1, dis2, dis3, dis4));
		}
		
	}
	return 0;
}
