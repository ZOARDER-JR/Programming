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
	int t,temp,i;
	long long a,b,c;

	cin >> t;

	for(i=1;i<=t;i++)
	{
		cin >> a >> b >> c ;

		if(a>0 && b>0 && c>0)
		{
			if(a>b)
			{
				temp=a;
				a=b;
				b=temp;
			}
			if(a>c)
			{
				temp=a;
				a=c;
				c=temp;
			}
			if(b>c)
			{
				temp=b;
				b=c;
				c=temp;
			}

			if((a+b)<=c)
			{
				cout << "Case " << i << ": Invalid" <<endl;
			}
			else if(a==b && b==c)
			{
				cout << "Case " << i << ": Equilateral" <<endl;
			}
			else if(a==b || b==c)
			{
				cout << "Case " << i << ": Isosceles" <<endl;
			}
			else
			{
				cout << "Case " << i << ": Scalene" <<endl;
			}
		}
		else
		{
			cout << "Case " << i << ": Invalid" <<endl;
		}
	}
	return 0;
}