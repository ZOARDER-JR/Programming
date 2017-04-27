#include<iostream>
#include<cstdio>

using namespace std;

double Factorial(int x);

int main()
{
	int n,m,i;
	double fact_n,fact_m,fact_nm;
	long double c;

	while(cin >> n >> m)
	{
		if(n==0 && m==0)
		{
			break;
		}
	
		fact_n=Factorial(n);
		fact_m=Factorial(m);
		fact_nm=Factorial(n-m);

		c=fact_n/(fact_nm*fact_m);

		printf("%d things taken %d at a time is %.0llf exactly.\n",n,m,c);
	}

	return 0;
}

double Factorial(int x)
{
	double fact=1;
	int i;

	for(;x>0;x--)
	{
		fact*=x;
	}

	return fact;
}