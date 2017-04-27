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

int main()
{
	int t,n,s,a,p;
	double ave_s,total,cst;

	cin >> t;

	while(t--)
	{
		cin >> n;
		total=0;

		while(n--)
		{
			cin >> s >> a >> p;

			ave_s=((s*1.0)/(a*1.0));
			cst=(ave_s*p)*a;
			total+=cst;
		}

		cout << total <<endl;
	}
	return 0;
}