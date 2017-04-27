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

struct man
{
	char name[20];
	int dd;
	int mm;
	int yy;
};

bool comp(man a,man b)
{
	if(a.yy!=b.yy)
		return a.yy < b.yy;
	else if(a.mm != b.mm)
		return a.mm < b.mm;
	else
		return a.dd < b.dd;
}

int main()
{
	int n;
	vector<man> V;

	while(cin >> n)
	{
		while(n--)
		{
			man A;

			scanf("%s %d %d %d",A.name,&A.dd,&A.mm,&A.yy);

			V.push_back(A);

		}

		sort(V.begin(),V.end(),comp);

		cout << V[V.size()-1].name <<endl << V[0].name <<endl;

		V.clear();

	}
	return 0;
}