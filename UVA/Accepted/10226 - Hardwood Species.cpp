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

using namespace std;

struct node
{
	//put what u need...:)
};
struct edge
{
	//put as u wish....:)
};

#define ul unsigned int 
#define ll long long 
#define ull unsigned long long 
#define vi vector<int> 
#define vc vector<char> 
#define vd vector<double> 
#define vb vector<bool> 
#define vs vector<string> 
#define vl vector<ll> 
#define vul vector<ull> 
#define vn vector<node> 
#define ve vector<edge> 
#define qi queue<int> 
#define qc queue<char> 
#define qs queue<string> 
#define ql queue<ll> 
#define qn queue<node> 
#define qe queue<edge> 
#define pqi priority_queue<int> 
#define pqc priority_queue<char> 
#define pqs priority_queue<string> 
#define pql priority_queue<ll> 
#define pqn priority_queue<node> 
#define pqe priority_queue<edge> 
#define si stack<int> 
#define sc stack<char> 
#define sd stack<double> 
#define sb stack<bool> 
#define ss stack<string> 
#define sl stack<ll> 
#define sul stack<ull> 
#define sn stack<node> 
#define se stack<edge> 
#define li list<int> 
#define lc list<char> 
#define ls list<string> 
#define ln list<node> 
#define le list<edge> 
#define mii map<int,int> 
#define mib map<int,bool> 
#define mic map<int,char> 
#define mis map<int,string> 
#define min map<int,node> 
#define mie map<int,edge> 
#define mcc map<char,char> 
#define mci map<char,int> 
#define mcs map<char,string> 
#define mcb map<char,bool> 
#define mss map<string,string> 
#define msi map<string,int> 
#define msl map<string,ll> 
#define msb map<string,bool> 
#define msd map<string,double> 
#define mlb map<ll,bool> 
#define mls map<ll,string> 
#define pii pair<int,int> 
#define pib pair<int,bool> 
#define pic pair<int,char> pic
#define pis pair<int,string> 
#define pin pair<int,node> 
#define pie pair<int,edge> 
#define pcc pair<char,char> 
#define pci pair<char,int> 
#define pcs pair<char,string> 
#define pcb pair<char,bool> 
#define pss pair<string,string> 
#define psi pair<string,int> 
#define psl pair<string,ll> 
#define psb pair<string,bool> 
#define plb pair<ll,bool> 
#define pls pair<ll,string> 
#define psd pair<string,double> 

#define INFMX 2147483647
#define INFMN -2147483647
#define pi acos(-1.0)
#define N 1000007
#define pb push_back
#define ppb pop_back
#define clr clear()
#define sp setprecision
#define fx fixed
#define pf printf
#define sf scanf
#define ff first
#define ss second
#define bgn begin()
#define end end()
#define gt getline

int main()
{
	msd m;
	msd::iterator it;
	int t,cnt;
	string str;
	char ch;
	bool flag=false;

	cin >> t;
	ch=getchar();
	ch=getchar();
	while(t--)
	{
		cnt = 0; 
		while(gt(cin,str))
		{
			if(str=="")
			{
				break;
			}

			cnt++;

			it=m.find(str);

			if(it!=m.end)
			{
				it->ss++;
			}
			else
			{
				m.insert(psd(str,1.0));
			}
		}
		
		if(flag)
		{
			cout << endl;
		}
		else
		{
			flag=true;
		}
		for(it=m.bgn;it!=m.end;it++)
		{
			cout << it->ff << " " << fx << sp(4) << (it->ss / cnt)*100 <<endl;
		}

		m.clr;
	}
	return 0;
}