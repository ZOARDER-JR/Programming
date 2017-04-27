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
#include<map>
#include<algorithm>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000

typedef long long LL;

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

struct data
{
	string m_str;
	string c_str;
};

string convert(string s);

int main()
{
	string str,temp;
	data d[1001];
	vector<string> s;
	multimap<string,string> m;
	multimap<string,string>:: iterator it;
	map<string,bool> M;
	map<string,bool>:: iterator IT;

	int i=0,j;
	bool flag;

	while(cin >> str)
	{
		if(str=="#")
			break;

		d[i].m_str=str;
		d[i].c_str=convert(str);

		m.insert(pair<string,string>(d[i].c_str,d[i].m_str));
		i++;
	}

	for(it=m.begin();it!=m.end();it++)
	{
		j=m.count(it->first);

		if(j==1)
		{
			M.insert(pair<string,bool>(it->second,true));
		}
	}
	for(IT=M.begin();IT!=M.end();IT++)
	{
		cout << IT->first <<endl;
	}

	return 0;
}

string convert(string s)
{
	string temp;
	int i;

	for(i=0;i<s.size();i++)
	{
		if(isupper(s[i]))
		{
			temp.push_back(tolower(s[i]));
		}
		else
		{
			temp.push_back(s[i]);
		}
	}

	sort(temp.begin(),temp.end());

	return temp;
}