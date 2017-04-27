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
	//put as u wish....:)
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
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<node> vn;
typedef vector<edge> ve;
typedef queue<int> qi;
typedef queue<char> qc;
typedef queue<node> qn;
typedef queue<edge> qe;
typedef deque<int> di;
typedef deque<char> dc;
typedef deque<node> dn;
typedef deque<edge> de;
typedef priority_queue<int> pqi;
typedef priority_queue<char> pqc;
typedef priority_queue<string> pqs;
typedef priority_queue<node> pqn;
typedef priority_queue<edge> pqe;
typedef stack<int> si;
typedef stack<char> sc;
typedef stack<node> sn;
typedef stack<edge> se;
typedef list<int> li;
typedef list<char> lc;
typedef list<node> ln;
typedef list<edge> le;
typedef map<int,int> mii;
typedef map<int,bool> mib;
typedef map<int,char> mic;
typedef map<int,string> mis;
typedef map<int,node> min;
typedef map<int,edge> mie;
typedef map<char,int> mci;
typedef map<char,bool> mcb;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef pair<int,bool> pib;
typedef pair<int,char> pic;
typedef pair<int,string> pis;
typedef pair<int,node> pin;
typedef pair<int,edge> pie;
typedef pair<char,int> pci;
typedef pair<char,bool> pcb;
typedef pair<string,int> psi;

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
#define fx fixed()
#define pf printf
#define sf scanf
#define ff first
#define ss second
#define bgn begin()
#define end end()
#define emp empty()

int main()
{
	int n,a,i;
	long long count;	
	map<int,int> M;
	map<int,int>::iterator it;
	cin >> n;

	count=0;

	for(i=1;i <= n;i++)
	{
		cin >> a;

		it=M.find(a);

		if(it==M.end)
		{
			M.insert(pair<int,int>(a,1));
			count+=a;
		}
		else
		{
			count+=(a-it->second);
			it->second++;
		}

	}

	cout << count <<endl;
	return 0;
}