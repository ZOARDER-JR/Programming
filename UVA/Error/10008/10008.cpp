#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<utility>
#include<iomanip>

using namespace std;

bool compear(const pair<char,int> a1,const pair<char,int> a2)
{
	if(a1.second==a2.second)
	{
		return a1.first < a2.first;
	}
	else
	{
		return a1.second > a2.second;
	}
}

int main()
{
	string str;
	int n,i,j;
	char ch,ch1;
	map<char,int> m;
	map<char,int>::iterator it;
	vector<pair<char,int> > v;

	m.clear();
	v.clear();
	cin >> n;
	ch=getchar();
	for(i=1;i<=n;i++)
	{
		getline(cin,str);

		for(j=0;j<str.length();j++)
		{
			ch1=str[j];
			if(isalpha(ch1))
			{
				if(islower(ch1))
				{
					ch1=toupper(ch1);
				}

				it=m.find(ch1);

				if(it!=m.end())
				{
					m[ch1]++;
				}
				else
				{
					m[ch1]=1;
				}
			}
		}
	}
	
	for(it=m.begin();it!=m.end();it++)
	{
		v.push_back(make_pair(it->first , it->second));
	}

	sort(v.begin(),v.end(),compear);

	for(i=0;i<v.size();i++)
	{
		cout << v[i].first << " " << v[i].second <<endl;
	}

	return 0;
}