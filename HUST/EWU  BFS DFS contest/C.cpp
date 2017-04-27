#define _CRT_SECURE_NO_WARNINGS

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
#include<functional>

using namespace std;

#define INFMX 2147483647
#define INFMN -2147483647
#define pi acos(-1.0)
#define N 100001
#define size 26

#define psb(x) push_back(x)
#define psf(x) push_front(x)
#define ppb pop_back
#define ppf pop_front
#define pop pop()
#define frnt front()
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

int dis[size][size][size];
int chk[size][size][size];

struct word
{
	int x;
	int y;
	int z;

	word(){}
	word(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
};

int main()
{
	string strs, strd, stf1, stf2, stf3;
	int t, n;

	sf1(t);

	fort(t)
	{
		reset(dis);
		reset(chk);

		cin >> strs >> strd;

		word sors(strs[0] - 'a', strs[1] - 'a', strs[2] - 'a'), dest(strd[0] - 'a', strd[1] - 'a', strd[2] - 'a');

		sf1(n);

		for1(i, n)
		{
			cin >> stf1 >> stf2 >> stf3;
			string::iterator it1, it2, it3;
			for (it1 = stf1.bgn; it1!=stf1.end; it1++)
			{
				for (it2 = stf2.bgn; it2 != stf2.end; it2++)
				{
					for (it3 = stf3.bgn; it3 != stf3.end; it3++)
					{
						chk[*it1 - 'a'][*it2 - 'a'][*it3 - 'a'] = -1;
					}
				}
			}
		}

		if (chk[sors.x][sors.y][sors.z] == -1)
		{
			pf("Case %d: %d\n", o, -1);
			continue;
		}
		else if (strs == strd)
		{
			pf("Case %d: %d\n", o, 0);
			continue;
		}

		queue<word> Q;
		Q.push(sors);
		chk[sors.x][sors.y][sors.z] = 1;

		bool flag = false;

		while (!Q.emp)
		{
			word u = Q.frnt;
			Q.pop;

			if (u.x == dest.x && u.y == dest.y && u.z == dest.z)
			{
				flag = true;
				break;
			}

			for0(i, 6)
			{
				word p((u.x + X3D6[i]) % 26, (u.y + Y3D6[i]) % 26, (u.z + Z3D6[i]) % 26);

				if (p.x < 0)
					p.x+=26;
				if (p.y < 0)
					p.y += 26;
				if (p.z < 0)
					p.z += 26;

				if (chk[p.x][p.y][p.z] == 0)
				{
					dis[p.x][p.y][p.z] = dis[u.x][u.y][u.z] + 1;
					chk[p.x][p.y][p.z] = 1;
					Q.push(p);
				}
			}

		}

		if (flag)
		{
			pf("Case %d: %d\n", o, dis[dest.x][dest.y][dest.z]);
		}
		else
		{
			pf("Case %d: %d\n", o, -1);
		}
		
	}
	return 0;
}
