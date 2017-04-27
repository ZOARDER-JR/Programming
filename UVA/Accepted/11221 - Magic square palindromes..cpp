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
#include<map>
#include<algorithm>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000

typedef long long LL;

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

int is_sqr(int a);
string rev(string a);
int check(string str);
string convert(string s);

int main()
{
	int t;
	string str;

	cin >> t;
	char ch=getchar();

	for(int i=1;i<=t;i++)
	{
		getline(cin,str);
		bool flag;
		int n,a;

		string temp=convert(str);
		
		int x=check(temp);

		if(x!=0)
		{
			n=temp.size();
			a=is_sqr(n);

			if(a!=0)
			{
				vector<string> s;

				for(int j=0;j<n;j+=a)
				{
					s.push_back(temp.substr(j,a));
				}

				int j,k;

				for(j=0,k=s.size()-1;j<=k;j++,k--)
				{
					if(s[j]!=rev(s[k]))
					{
						flag=false;
						break;
					}
					else
					{
						flag=true;
					}
				}
			}
			else
			{
				flag=false;
			}
		}
		else
		{
			flag=false;
		}

		if(flag)
		{
			cout << "Case #" << i << ":" <<endl;
			cout << a <<endl;
		}
		else
		{
			cout << "Case #" << i << ":" <<endl;
			cout << "No magic :(" <<endl;
		}

	}
	return 0;
}

int is_sqr(int a)
{
	int n;

	n=sqrt(a*1.0);

	if(a%n == 0 && a/n == n)
	{
		return n;
	}

	return 0;
}
string rev(string a)
{
	string temp;

	for(int i=a.size()-1;i>=0;i--)
	{
		temp.push_back(a[i]);
	}

	return temp;
}
int check(string str)
{
	int val=1;

	for(int i=0,j=str.size()-1;i<=j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			val&=0;
		}
	}

	return val;

}
string convert(string s)
{
	string str;
	int i;

	for(i=0;i<s.size();i++)
	{
		if(isalpha(s[i]))
		{
			str.push_back(s[i]);
		}
	}

	return str;

}