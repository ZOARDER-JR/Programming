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
#define fst first
#define snd second

#define reset(a) memset(a,0,sizeof(a))
#define assign(a,b) memset(a,b,sizeof(a))
#define assignmx(a) memset(a,127,sizeof(a))
#define assignmn(a) memset(a,128,sizeof(a))

#define max3(x, y, z) max(x, max(y, z))
#define min3(x, y, z) min(x, min(y, z))
#define max4(w, x, y, z) max(w, max(x, max(y,z)))
#define min4(w, x, y, z) min(w, min(x, min(y, z)))

#define range(r,c) ((r >=0 && r <row) && (c >=0 && c <column))

#define getch char ch=getchar()
#define gtl(str) getline(cin,str)

#define loop(x,r,n) for(x = r ; x <= n ; x++)
#define loopr(x, r, n) for (x = r; x >= n; x--)
#define test(t) for(int o = 1 ; o <= t ; o++)
#define printcs cout << "Case " << o << ": ";
#define nl cout << "\n"

//int X4[] = { 0, -1, 0, 1 };
//int Y4[] = { -1, 0, 1, 0 };
int X8[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int Y8[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

//int X3D6[] = { 0, 0, -1, 1, 0, 0 };
//int Y3D6[] = { -1, 1, 0, 0, 0, 0 };
//int Z3D6[] = { 0, 0, 0, 0, -1, 1 };

bool flag, flag1, flag2, flag3;

int row, column;

int i, j, k;

#define INFMX 2139062143
#define INFMN -2139062144
#define pi acos(-1.0)
#define N 1000005

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t,n;

	cin >> t;

	while(t--)
	{
		cin >> n;

		if(n < 3 || n%3 == 1)
		{
			cout << -1;nl;
		}
		else
		{
			if(n%3 == 0)
			{
				loop(i,1,n)
				{
					cout << 5;
				}

				nl;
			}
			else
			{
				loop(i,1,n-5)
				{
					cout << 5;
				}
				loop(i,1,5)
				{
					cout << 3;
				}

				nl;
			}
		}
	}
	return 0;
}

