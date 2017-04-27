#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

#define pi acos( -1.0 )

using namespace std;

int main()
{
	int t,l;
	double b,r,a_r,a_c,temp;
	cin >>t;

	while(t--)
	{
		cin >>l;

		b=(6*l*1.0)/10;
		r=(2*l*1.0)/10;
		temp=l*b*1.0;
		a_c=pi*r*r;
		a_r=temp-a_c;

		printf("%.2lf %.2lf\n",a_c,a_r);
	}
	return 0;
}