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

#define max3(x, y, z) max(max(x, y), max(y, z))
#define min3(x, y, z) min(min(x, y), min(y, z))
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


/*int X4[] = { 0, -1, 0, 1 };
int Y4[] = { -1, 0, 1, 0 };
int X8[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int Y8[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int X3D6[] = { 0, 0, -1, 1, 0, 0 };
int Y3D6[] = { -1, 1, 0, 0, 0, 0 };
int Z3D6[] = { 0, 0, 0, 0, -1, 1 };*/

#define INFMX 2139062143
#define INFMN -2139062144
#define pi acos(-1.0)
#define N 33554431

/*bool flag, flag1, flag2, flag3;
int tempi, tempi1,tempi2, tempi3;
char ch, ch1, ch2;
ll templ, templ1, templ2, templ3;

int row, column;
list<int> adj[N];
list<int>::iterator itl;*/

ll bigmod(ll x,ll y, ll z)
{
	ll c;
	if(y==0)
		return 1;
	if(y%2==0)
	{
		c=bigmod(x,y/2,z);

		return ((c%z)*(c%z))%z;
	}
	if(y%2==1)
	{
		return ((x%z)*(bigmod(x,y-1,z)%z))%z;
	}

}
int main()
{
    int t;
    ll n;
    ll rslt;

    sfi1(t);

    fort(t)
    {
        sfll1(n);

        rslt = bigmod(2,n+1,N);

        pf("Case %d: %lld\n",o,rslt-1);
    }
	return 0;
}
