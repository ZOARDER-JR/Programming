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
	int B[3],G[3],C[3],total,mn,i;
	string a;

	while(cin >> B[0] >> G[0] >> C[0] >> B[1] >> G[1] >> C[1] >> B[2] >> G[2] >> C[2])
	{
		a.clear();
		total=B[0]+G[0]+C[0]+B[1]+G[1]+C[1]+B[2]+G[2]+C[2];

		mn=total;

		if((total-B[0]-C[1]-G[2])<mn)
		{
			mn=(total-B[0]-C[1]-G[2]);
			a="BCG";
		}
		if((total-B[0]-C[2]-G[1])<mn)
		{
			mn=(total-B[0]-C[2]-G[1]);
			a="BGC";
		}
		if((total-B[1]-C[0]-G[2])<mn)
		{
			mn=(total-B[1]-C[0]-G[2]);
			a="CBG";
		}
		if((total-B[2]-C[0]-G[1])<mn)
		{
			mn=(total-B[2]-C[0]-G[1]);
			a="CGB";
		}
		if((total-B[1]-C[2]-G[0])<mn)
		{
			mn=(total-B[1]-C[2]-G[0]);
			a="GBC";
		}
		if((total-B[2]-C[1]-G[0])<mn)
		{
			mn=(total-B[2]-C[1]-G[0]);
			a="GCB";
		}

		cout << a << " " << mn <<endl;
	}

	return 0;
}