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
//int X8[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
//int Y8[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

//int X3D6[] = { 0, 0, -1, 1, 0, 0 };
//int Y3D6[] = { -1, 1, 0, 0, 0, 0 };
//int Z3D6[] = { 0, 0, 0, 0, -1, 1 };

bool flag, flag1, flag2, flag3;

int row, column;

int i, j, k, l;

#define INFMX 2139062143
#define INFMN -2139062144
#define pi acos(-1.0)
#define N 1000005

double calculate_area(double x1, double y1, double x2, double y2, double x3, double y3);
double calculate_distance(double x1, double y1, double x2, double y2);
double calculate_shortest_distance(double x1, double y1, double x2, double y2, double m, double n);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	double x[3], y[3], area[3], m, n, total_area, d[3];
	string str;
	int t;

	cin >> t;

	while (t--)
	{
		cin >> str;

		for (i = 1,j=0; i < 15; i+=5,j++)
		{
			x[j] = str[i] - '0';
			y[j] = str[i + 2] - '0';
		}

		m = str[16] - '0';
		n = str[18] - '0';

		total_area = calculate_area(x[0], y[0], x[1], y[1], x[2], y[2]);
		area[0] = calculate_area(x[0], y[0], x[1], y[1], m, n);
		area[1] = calculate_area(x[1], y[1], x[2], y[2], m, n);
		area[2] = calculate_area(x[0], y[0], x[2], y[2], m, n);

		if (total_area == (area[0] + area[1] + area[2]))
		{
			cout << "SUB IUPC!" << endl;
		}
		else
		{
			d[0] = calculate_shortest_distance(x[0], y[0], x[1], y[1], m, n);
			d[1] = calculate_shortest_distance(x[0], y[0], x[2], y[2], m, n);
			d[2] = calculate_shortest_distance(x[1], y[1], x[2], y[2], m, n);

			double temp = min3(d[0], d[1], d[2])*pow(10.0, 4.0); // this is bullshit....
			int round = temp;


			cout << fixed << setprecision(4) << (round*1.0) / pow(10.0, 4.0) << endl;
		}

	}
	return 0;
}

double calculate_area(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double res;

	res = x1*(y2 - y3) - x2*(y1 - y3) + x3*(y1 - y2);
	res /= 2;

	return (res < 0 ? res*(-1) : res);
}

double calculate_distance(double x1, double y1, double x2, double y2)
{
	double res;

	res = sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2)));

	return res;
}
double calculate_shortest_distance(double x1, double y1, double x2, double y2, double m, double n)
{
	double x, y, m1, m2, c1, c2;

	m1 = (y1 - y2) / (x1 - x2);
	m2 = (x2 - x1) / (y1 - y2);
	c1 = (x1*y2 - x2*y1) / (x1 - x2);
	c2 = n - (m*m2);

	x = (c2 - c1) / (m1 - m2);
	y = (m1*x) + c1;

	if (x >= min(x1, x2) && x <= max(x1, x2) && y >= min(y1, y2) && y <= max(y1, y2))
	{
		return calculate_distance(x, y, m, n);
	}
	else
	{
		return min(calculate_distance(x1, y1, m, n), calculate_distance(x2, y2, m, n));
	}
}