#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int t,c,f,i;
	float rslt;

	cin >> t;

	for(i=1;i<=t;i++)
	{
		float temp,d;

		cin >> c >> f;
		
		temp=(9.0*c+160)/5;

		d=f+temp;

		rslt=(5*(d-32))/9;

		printf("Case %d: %.2f\n",i,rslt);
	}

	return 0;
}