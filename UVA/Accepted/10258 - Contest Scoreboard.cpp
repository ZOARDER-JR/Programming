#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

class prblm
{
public:
	int p;
	bool d;
	prblm(){p=0;d=false;};
};

class team
{
public:
	int id;
	int t_s;
	int t_t;
	prblm prb[10];
	team(){t_s=0;t_t=0;};

};

bool comp(team t1,team t2);
void print(team t);

int main()
{
	int n,i,j,a,b,c;
	vector<team> v;
	char str[1000],ch;
	bool flag,blank=false;

	cin >> n;
	ch=getchar();
	gets(str);

	for(i=1;i<=n;i++)
	{
		while(gets(str))
		{
			if(strcmp(str,"")==0)
			{
				break;
			}

			sscanf(str,"%d %d %d %c",&a,&b,&c,&ch);

			flag=true;

			for(j=0;j<v.size();j++)
			{
				if(v[j].id==a)
				{
					flag=false;
					break;
				}
			}

			if(flag)
			{
				team T;

				T.id=a;
				if(ch=='I')
				{
					T.prb[b-1].p+=20;
				}
				else if(ch=='C')
				{
					T.t_t+=(T.prb[b-1].p+c);
					T.t_s+=1;
					T.prb[b-1].d=true;
				}

				v.push_back(T);
			}
			else
			{
				if(ch=='I' && !v[j].prb[b-1].d)
				{
					v[j].prb[b-1].p+=20;
				}
				else if(ch=='C' && !v[j].prb[b-1].d)
				{
					v[j].t_t+=(v[j].prb[b-1].p+c);
					v[j].t_s+=1;
					v[j].prb[b-1].d=true;
				}
			}
		}

		sort(v.begin(),v.end(),comp);

		if(blank)
			cout <<endl;

		blank=true;

		for(int j=0;j<v.size();j++)
		{
			print(v[j]);
		}

		v.clear();
	}
	return 0;
}

bool comp(team t1,team t2)
{
	if(t1.t_s != t2.t_s)
	{
		return t1.t_s > t2.t_s ;
	}
	if(t1.t_t != t2.t_t)
	{
		return t1.t_t < t2.t_t ;
	}

	return t1.id < t2.id ;
}

void print(team t)
{
	cout << t.id << " " << t.t_s << " " << t.t_t <<endl;
}