#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
#include<queue>

using namespace std;

class comp {
public:
	bool operator()(long long a, long long b) {
		return a > b;
	}
};


int main()
{
	int n,i,a,b;
	long long cst;
	priority_queue<long long,vector<long long>, comp> pq;

	while(cin >> n)
	{
		if(n==0)
		{
			break;
		}

		while(n--)
		{
			cin >> i;
			pq.push(i);
		}

		cst=0;

		while(pq.size() > 1)
		{
			a=pq.top();
			pq.pop();
			b=pq.top();
			pq.pop();

			cst+=(a+b);

			pq.push(a+b);
		}

		cout << cst <<endl;

		pq.pop();
	}

	return 0;
}

