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
#include<list>
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

bool w[256];

int main()
{
	int n;

	while(cin >> n)
	{
		if(n==-1)
		{
			break;
		}

		memset(w,false,sizeof(w));

		string tg,g;
		int cnt;
		map<char,bool> m;
		map<char,bool>::iterator it;

		cin >> tg >> g;
		cnt=0;

		for(int i=0;i<tg.size();i++)
		{
			m.insert(pair<char,bool>(tg[i],false));
		}

		for(int i=0;i<g.size();i++)
		{
			if(cnt == 7 || m.empty())
			{
				break;
			}

			it=m.find(g[i]);

			if(it!=m.end() && !it->second)
			{
				w[it->first]=true;
				m.erase(it);
			}
			else
			{
				if(!w[g[i]])
				{
					cnt++;
					w[g[i]]=true;
				}
			}
		}

		cout << "Round " << n <<endl;

		if(cnt < 7 && m.empty())
		{
			cout << "You win." <<endl;
		}
		else if(cnt == 7)
		{
			cout << "You lose." <<endl;
		}
		else
		{
			cout << "You chickened out." <<endl;	
		}
	}
	return 0;
}