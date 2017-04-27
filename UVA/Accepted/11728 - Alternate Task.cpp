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

struct node
{
	//put what u need...:)
};
struct edge
{
	//put as u wish....:)
};

typedef unsigned int ul;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<ull> vul;
typedef vector<node> vn;
typedef vector<edge> ve;
typedef queue<int> qi;
typedef queue<char> qc;
typedef queue<string> qs;
typedef queue<ll> ql;
typedef queue<node> qn;
typedef queue<edge> qe;
typedef deque<int> di;
typedef deque<char> dc;
typedef deque<string> ds;
typedef deque<ll> dl;
typedef deque<node> dn;
typedef deque<edge> de;
typedef priority_queue<int> pqi;
typedef priority_queue<char> pqc;
typedef priority_queue<string> pqs;
typedef priority_queue<ll> pql;
typedef priority_queue<node> pqn;
typedef priority_queue<edge> pqe;
typedef stack<int> si;
typedef stack<char> sc;
typedef stack<double> sd;
typedef stack<bool> sb;
typedef stack<string> ss;
typedef stack<ll> sl;
typedef stack<ull> sul;
typedef stack<node> sn;
typedef stack<edge> se;
typedef list<int> li;
typedef list<char> lc;
typedef list<string> ls;
typedef list<node> ln;
typedef list<edge> le;
typedef map<int,int> mii;
typedef map<int,bool> mib;
typedef map<int,char> mic;
typedef map<int,string> mis;
typedef map<int,node> min;
typedef map<int,edge> mie;
typedef map<char,char> mcc;
typedef map<char,int> mci;
typedef map<char,string> mcs;
typedef map<char,bool> mcb;
typedef map<string,string> mss;
typedef map<string,double> msd;
typedef map<string,int> msi;
typedef map<string,ll> msl;
typedef map<string,bool> msb;
typedef map<ll,bool> mlb;
typedef map<ll,string> mls;
typedef pair<int,int> pii;
typedef pair<int,bool> pib;
typedef pair<int,char> pic;
typedef pair<int,string> pis;
typedef pair<int,node> pin;
typedef pair<int,edge> pie;
typedef pair<char,char> pcc;
typedef pair<char,int> pci;
typedef pair<char,string> pcs;
typedef pair<char,bool> pcb;
typedef pair<string,string> pss;
typedef pair<string,int> psi;
typedef pair<string,ll> psl;
typedef pair<string,bool> psb;
typedef pair<ll,bool> plb;
typedef pair<ll,string> pls;

#define INFMX 2147483647
#define INFMN -2147483647
#define pi acos(-1.0)
#define N 1001
#define pb push_back
#define ppb pop_back
#define pff push_front
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

int sumf(int i);

int main()
{
	int sum[1001],i;
	memset(sum,0,sizeof(sum));

	for(i=1;i<=1000;i++)
	{
		int a=sumf(i);

		if(a <= 1000 && sum[a] < i)
		{
			sum[a] = i;
		}
	}

	int n;
	i=1;

	while(cin >> n)
	{
		if(n == 0)
		{
			break;
		}

		cout << "Case " << i << ": " << (sum[n] != 0?sum[n]:-1) <<endl;

		i++;
	}
	return 0;
}

int sumf(int i)
{
	int sum=1,j;

	if(i==1)
		return sum;

	for(j=2;j<sqrt(i*1.0);j++)
	{
		if(i%j == 0)
		{
			sum+=j;
			sum+=(i/j);
		}
	}

	if(i%j == 0 && i/j == j)
	{
		sum+=j;
	}

	return sum+i;
}