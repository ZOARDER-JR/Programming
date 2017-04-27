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

int Num_rev(int a)
{
	int x,y=0;
	int n=log10(a*1.0);

	while(a>0)
	{
		x=a%10;
		y+=(x*pow(10,n*1.0));
		a/=10;
		n--;
	}

	return y;
}

bool prime(int a)
{
	int i;
	if(a==1)
	{
		return true;
	}
	else
	{
		for(i=2;i<=sqrt(a*1.0);i++)
		{
			if(a%i==0)
			{
				return false;
			}
		}

		return true;
	}
}

int main()
{
	bool isprime[1000005];

	memset(isprime,true,1000005);

	int n,i,k,temp;

	isprime[0]=false;

	for(i=2;i<=sqrt(1000000.00);i++)
	{
		if(prime(i))
		{
			for(k=i*i;k<=1000000;k+=i)
			{
				isprime[k]=false;
			}
		}
	}

	while(cin >> n)
	{
		if(isprime[n])
		{
			temp=Num_rev(n);

			if(isprime[temp] && temp!=n)
			{
				cout << n << " is emirp." <<endl;
			}
			else
			{
				cout << n << " is prime." <<endl;
			}

		}
		else
		{
			cout << n << " is not prime." <<endl;
		}
	}
	return 0;
}