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
#include<set>
#include<map>
#include<algorithm>
#include<utility>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000

typedef long long LL;

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

int main()
{
	int n,k,i;
	long double cost;
	long long c,M;
	char ch;
	string str;
	map<char,long long> m;
	map<char,long long>::iterator it;

	cin >> n;
	
	while(n--)
	{
		cin >> k;

		while(k--)
		{
			cin >> ch >> c;

			m.insert(pair<char,long long> (ch,c));
		}

		cin >> M;
		cost=0;
		ch=getchar();

		while(M--)
		{
			getline(cin,str);

			for(i=0;i<str.size();i++)
			{
				it=m.find(str[i]);
				if(it!=m.end())
				{
					cost+=it->second;
				}
			}
		}

		cost/=100;
		cout << fixed << setprecision(2) << cost << "$" <<endl;

		m.clear();
	}
	return 0;
}