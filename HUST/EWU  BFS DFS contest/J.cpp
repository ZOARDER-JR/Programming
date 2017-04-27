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
#define size 210

bool flag, flag1, flag2, flag3, flag4;

queue<pair<int, int> > fire;
void fill_fire();

char grd[size][size];
int chkj[size][size];
int chkf[size][size];
int disj[size][size];
int disf[size][size];

int row, column;

int main()
{
	pair<int, int> srs,des;
	int t;

	sf1(t);

	fort(t)
	{
		sf2(row, column);

		assign(grd, '.');
		assignmx(disj);
		assignmx(disf);
		reset(chkj);
		reset(chkf);
		
		while (!fire.emp)
			fire.pop;

		for0(i, row)
		{
			char ch = getch;

			for0(j, column)
			{
				sfch(grd[i][j]);

				if (grd[i][j] == '#')
				{
					chkj[i][j] = -1;
					chkf[i][j] = -1;
				}
				else if (grd[i][j] == 'F')
				{
					chkj[i][j] = -1;
					fire.push(make_pair(i, j));
				}
				else if (grd[i][j] == 'J')
				{
					//chkf[i][j] = -1;
					srs.first = i;
					srs.second = j;
				}
			}
		}

		fill_fire();

		queue<pair<int, int> > Q;

		chkj[srs.first][srs.second] = 1;
		disj[srs.first][srs.second] = 0;

		Q.push(srs);
		flag = false;

		while (!Q.emp)
		{
			pair<int, int> u = Q.front;
			Q.pop;

			if ((u.first == 0 || u.first == row-1) || (u.second == 0 || u.second == column-1))
			{
				flag = true;
				des.first = u.first;
				des.second = u.second;
				break;
			}

			for0(i, 4)
			{
				int a, b;
				a = u.first + X4[i];
				b = u.second + Y4[i];

				if (range(a,b))
				{
					if (chkj[a][b] == 0 && disf[a][b] > disj[u.first][u.second]+1)
					{
						chkj[a][b] = 1;
						disj[a][b] = disj[u.first][u.second] + 1;

						Q.push(make_pair(a, b));
					}
				}
			}
		}

		if (flag)
		{
			pf("Case %d: %d\n", o, disj[des.first][des.second]+1);
		}
		else
		{
			pf("Case %d: IMPOSSIBLE\n", o);
		}
	}
	return 0;
}

void fill_fire()
{
	queue<pair<int, int> > temp = fire;

	while (!temp.emp)
	{
		pair<int, int> q = temp.front;
		temp.pop;

		disf[q.first][q.second] = 0;
		chkf[q.first][q.second] = 1;

	}

	while (!fire.emp)
	{
		pair<int, int> q;

		q = fire.front;
		fire.pop;

		for0(i, 4)
		{
			int a, b;
			a = q.first + X4[i];
			b = q.second + Y4[i];

			if (range(a,b) && chkf[a][b] == 0)
			{
				chkf[a][b] = 1;
				disf[a][b] = disf[q.first][q.second]+1;
				fire.push(make_pair(a, b));
			}
		}
	}
}
