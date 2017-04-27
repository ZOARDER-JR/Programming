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
#define getch char ch=getchar()

#define loopl(r,n) for(int i = r; i < n; i++)
#define loope(r,n) for(int i = r ; i <= n ; i++)
#define test(t) for(int o = 1 ; o <= t ; o++)

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
#define pi acos(-1.0)
#define N 100001

int main()
{
	int t, m, n;

	_SFI(t);

	test(t)
	{
		_2SFI(m, n);

		int res,num;

		res = ceil(n*1.0 / 2.0);

		if (m <= 2 || n <= 2)
		{
			if (m == 1 || n == 1)
			{
				num = max(n, m);
			}
			else
			{
				int temp=max(n,m);

				if (temp % 4 == 0)
				{
					num = temp;
				}
				else
				{
					if (temp % 2 == 0)
					{
						num = 2 * ((temp / 2) + 1);
					}
					else
					{
						num = 2 * (ceil(temp*1.0 / 2.0));
					}
				}
				
			}
		}
		else
		{
			if (n % 2 == 0)
			{
				num = res*m;
			}
			else
			{
				num = res*ceil(m*1.0 / 2.0);
				num += (res - 1)*floor(m*1.0 / 2.0);
			}
		}

		PF("Case %d: %d\n",o,num);
	}
	return 0;
}
