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

#define range(r,row,c,column) ((r >=0 && r <row) && (c >=0 && c <column))

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
#define FORI(i,n,v,r) for(int i = r ; i <= t ; i+=v)
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
int tempi, tempi1,tempi2, tempi3;
char ch, ch1, ch2;
ll templ, templ1, templ2, templ3;
double tempd, tempd1, tempd2, tempd3;

int x[]={3,0,0,0,1,1,1,2,2,2};
int y[]={1,0,1,2,0,1,2,0,1,2};

int chk[4][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, 0, -1 };
int main()
{
    string str;
    int n;

    while(cin >> n >> str)
    {
       // assign(chk,true);

        //chk[3][0]=false;
        //chk[3][2]=false;

        tempi=str[0]-'0';

        FORL(i,4)
        {
            FORL(j,3)
            {
                flag=false;
				string strt;
				strt.psb(chk[i][j] + '0');

                if(chk[i][j] != -1)
                {
                    int difx=i-x[tempi];
                    int dify=j-y[tempi];

                    for(int k=1;k < str.sz;k++)
                    {
                        tempi1=str[k]-'0';

                        if(range(x[tempi1]+difx,4,y[tempi1]+dify,3) && chk[x[tempi1]+difx][y[tempi1]+dify] != -1)
                        {
							strt.psb(chk[x[tempi1] + difx][y[tempi1] + dify] + '0');
                        }
                    }

                   if(strt.sz==str.sz && strt!=str)
                   {
                        flag=true;
                        break;
                   }
                }
            }

            if(flag)
                break;
        }

        if(flag)
            cout << "NO" <<endl;
        else
            cout << "YES" <<endl;
    }
	return 0;
}
