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

int main()
{
	int i, cnt, j;
	bool flag;
	string str, temp;

	while (getline(cin, str))
	{
		temp.assign("\0");
		if (isalpha(str[0]))
		{
			temp.push_back(str[0]);
			flag = false;
		}
		else
		{
			flag = true;
		}

		for (i = 1; i<str.size(); i++)
		{
			if (isalpha(str[i]))
			{
				temp.push_back(str[i]);
				flag = false;
			}
			else
			{
				if (flag == false)
				{
					temp.push_back(' ');
					flag = true;
				}
			}
		}

		cnt = 1;

		for (j = 0; j<(temp.size() - 1); j++)
		{
			if (temp[j] == ' ')
			{
				cnt++;
			}
		}

		cout << cnt << endl;
	}
	return 0;
}
