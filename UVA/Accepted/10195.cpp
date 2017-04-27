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

using namespace std;

int main()
{
	double a,b,c,r,s,ar;

	while(cin >> a >> b >> c)
	{
		if(a==0.0 || b==0.0 || c==0.0)
		{
			r=0.00;		
		}
		else
		{
			s=(a+b+c)/2;
			ar=sqrt(s*(s-a)*(s-b)*(s-c));
			r=ar/s;
		}

		printf("The radius of the round table is: %.3lf\n",r);
	}
	return 0;
}