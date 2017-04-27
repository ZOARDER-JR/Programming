#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<utility>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000

long long mx(long long a,long long b){return (a > b? a : b);}
long long mn(long long a,long long b){return (a < b? a : b);}

using namespace std;

long long to_decimel(string s,int base);
string to_X(long long num, int base);

int main()
{
	string str,res;
	int t,f;
	long long n;

	while(cin >> str >> f >> t)
	{
		n=to_decimel(str,f);

		if(t==10)
		{
			int i=log10(n*1.0)+1;

			if(i>7)
			{
				cout << setw(7) << "ERROR" <<endl;
			}
			else
			{
				cout << setw(7) << n <<endl;
			}
		}
		else
		{
			res=to_X(n,t);

			if(res.size() > 7)
			{
				cout << setw(7) << "ERROR" <<endl;
			}
			else
			{
				cout << setw(7) << res <<endl;
			}
		}
	}
	return 0;
}

long long to_decimel(string s,int base)
{
	long long num=0;
	int i,j;

	for(i=s.size()-1,j=0;i>=0;i--,j++)
	{
		if(s[j] >= '0' && s[j] <= '9' )
		{
			num+=(pow(base*1.0,i*1.0)*(s[j]-'0'));
		}
		else
		{
			num+=(pow(base*1.0,i*1.0)*(s[j]-55));
		}
		
	}

	return num;
}
string to_X(long long num, int base)
{
	string temp;
	vector<char> v;
	int n;

	if(num==0)
	{
		temp.push_back(0+'0');
		return temp;
	}

	while(num > 0)
	{
		n=num%base;

		if(n > 9)
		{
			v.push_back(n+55);
		}
		else
		{
			v.push_back(n+'0');
		}

		num/=base;
	}

	while(!v.empty())
	{
		temp.push_back(v.back());
		v.pop_back();
	}

	return temp;
}