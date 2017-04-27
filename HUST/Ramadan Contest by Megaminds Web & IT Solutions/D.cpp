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
#define gt getline
#define fort(i,t) for(int i=1 ;i <=t ;i++)

int main()
{
	string str;
	int n;
	map<char, int> M;
	map<char, int>::iterator it;
	char ch;

	cin >> n;
	ch = getchar();

	while (n--)
	{
		getline(cin,str);
		int max = 1;
		M.clr;

		for (int i = 0; i < str.sz; i++)
		{
			if (isalpha(str[i]) && islower(str[i]))
			{
				it = M.find(toupper(str[i]));

				if (it == M.end)
				{
					M.insert(pair<char, int>(toupper(str[i]), 1));
				}
				else
				{
					it->second++;

					if (it->second > max)
						max = it->second;
				}
			}
			else if (isalpha(str[i]) && isupper(str[i]))
			{
				it = M.find(str[i]);

				if (it == M.end)
				{
					M.insert(pair<char, int>(str[i], 1));
				}
				else
				{
					it->second++;

					if (it->second > max)
						max = it->second;
				}
			}
		}

		for (it = M.bgn; it != M.end; it++)
		{
			if (it->second == max)
				cout <<(char) tolower(it->first);
		}


		cout << endl;
	}
	return 0;
}
