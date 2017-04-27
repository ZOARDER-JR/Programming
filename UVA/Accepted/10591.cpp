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
#include<iomanip>

using namespace std;

int squarSum(int a)
{
	int temp;

	if(a==0)
	{
		return a;
	}
	else
	{
		temp=a%10;
		a/=10;

		return (temp*temp)+squarSum(a);
	}
}

int main()
{
	int n,t,i,temp;
	bool flag;
	map<int,bool> m;
	map<int,bool>::iterator it;
	cin >> t;

	for(i=1;i<=t;i++)
	{
		m.clear();
		cin >> n;
		temp=n;
		flag=true;

		while(squarSum(n)!=1)
		{
			n=squarSum(n);
			it=m.find(n);
			if(it!=m.end())
			{
				flag=false;
				break;
			}
			else
			{
				m[n]=true;
			}
		}

		if(flag)
		{
			cout << "Case #" << i << ": " << temp << " is a Happy number." <<endl;
		}
		else
		{
			cout << "Case #" << i << ": " << temp << " is an Unhappy number." <<endl;
		}
	}
	return 0;
}