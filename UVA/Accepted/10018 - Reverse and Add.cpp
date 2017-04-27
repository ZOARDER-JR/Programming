#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool Palin_num(long long a);
long long Num_rev(long long a);

int main()
{
	int t,i,cnt;
	long long num,temp;

	cin >>t;

	while(t--)
	{
		cin >> num;

		cnt=0;

		while(Palin_num(num)!=true)
		{
			num+=Num_rev(num);
			cnt++;
		}

		cout << cnt << ' ' << num << endl;
	}
	return 0;
}



bool Palin_num(long long a)
{
	int temp,i,n=log10(a*1.0);
	int n1,n2;
	long long a1;
	bool flag=true;
	temp=n;
	a1=a;

	for(i=1;i<=(temp+1)/2;i++,n--)
	{
		n1=(a1/(int)(1*pow(10,n*1.0)));
		n2=a%10;
		if(n1!=n2)
		{
			flag=false;
			break;
		}
		else
		{
			a1%=(int)(1*pow(10,n*1.0));
			a/=10;
		}
	}

	return flag;

}
long long Num_rev(long long a)
{
	long long x,y=0;
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