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

using namespace std;

#define INFMX 2147483647
#define INFMN -2147483647
#define pi acos(-1.0)
#define N 100001
#define psb push_back
#define ppb pop_back
#define psf push_front
#define ppf pop_front
#define clr clear()
#define sp setprecision
#define fx fixed
#define pf printf
#define sf scanf
#define ff first
#define ss second
#define bgn begin()
#define end end()
#define emp empty()
#define sz size()
#define fort(i,t) for(int i=1 ;i <=t ;i++)

char brd[3][3];

bool if_X_win();
bool if_O_win();

int main()
{
	int n,cntx,cnto;
	char ch1, ch2;
	
	while (cin >> n)
	{
		while (n--)
		{
			cntx = 0; cnto = 0;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cin >> brd[i][j];

					if (brd[i][j] == 'X')
						cntx++;
					else if (brd[i][j] == 'O')
						cnto++;
				}
			}

			if ((cntx - cnto) > 1 || (cntx - cnto) < 0)
			{
				cout << "no" << endl;
			}
			else
			{
				if ((cntx - cnto) == 1)
				{
					if (if_O_win())
						cout << "no" << endl;
					else
						cout << "yes" << endl;
				}
				else if ((cntx - cnto) == 0)
				{
					if (if_X_win())
						cout << "no" << endl;
					else
						cout << "yes" << endl;
				}
				else
				{
					cout << "yes" << endl;
				}
			}
		}
	}
	return 0;
}

bool if_X_win()
{
	if (brd[0][0] == 'X' && brd[0][1] == 'X' && brd[0][2] == 'X')
		return true;
	if (brd[1][0] == 'X' && brd[1][1] == 'X' && brd[1][2] == 'X')
		return true;
	if (brd[2][0] == 'X' && brd[2][1] == 'X' && brd[2][2] == 'X')
		return true;
	if (brd[0][0] == 'X' && brd[1][0] == 'X' && brd[2][0] == 'X')
		return true;
	if (brd[0][1] == 'X' && brd[1][1] == 'X' && brd[2][1] == 'X')
		return true;
	if (brd[0][2] == 'X' && brd[1][2] == 'X' && brd[2][2] == 'X')
		return true;
	if (brd[0][0] == 'X' && brd[1][1] == 'X' && brd[2][2] == 'X')
		return true;
	if (brd[2][0] == 'X' && brd[1][1] == 'X' && brd[0][2] == 'X')
		return true;

	return false;
}
bool if_O_win()
{
	if (brd[0][0] == 'O' && brd[0][1] == 'O' && brd[0][2] == 'O')
		return true;
	if (brd[1][0] == 'O' && brd[1][1] == 'O' && brd[1][2] == 'O')
		return true;
	if (brd[2][0] == 'O' && brd[2][1] == 'O' && brd[2][2] == 'O')
		return true;
	if (brd[0][0] == 'O' && brd[1][0] == 'O' && brd[2][0] == 'O')
		return true;
	if (brd[0][1] == 'O' && brd[1][1] == 'O' && brd[2][1] == 'O')
		return true;
	if (brd[0][2] == 'O' && brd[1][2] == 'O' && brd[2][2] == 'O')
		return true;
	if (brd[0][0] == 'O' && brd[1][1] == 'O' && brd[2][2] == 'O')
		return true;
	if (brd[2][0] == 'O' && brd[1][1] == 'O' && brd[0][2] == 'O')
		return true;

	return false;
}
