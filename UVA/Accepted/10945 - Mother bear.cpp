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

int check(string str);
string convert(string s);

int main()
{
	int n;
	string str,temp;

	while(getline(cin,str))
	{
		if(str=="DONE")
		{
			break;
		}

		temp=convert(str);

		n=check(temp);

		if(n==1)
		{
			cout << "You won't be eaten!" <<endl;
		}
		else
		{
			cout << "Uh oh.." <<endl;
		}
	}

	return 0;
}

int check(string str)
{
	int val=1;

	for(int i=0,j=str.size()-1;i<=j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			val&=0;
			break;
		}
	}

	return val;
}
string convert(string s)
{
	string str;
	int i,j;

	for(i=0;i<s.size();i++)
	{
		if(isalnum(s[i]))
		{
			if(islower(s[i]))
			{
				str.push_back(toupper(s[i]));
			}
			else
			{
				str.push_back(s[i]);
			}
		}
	}

	return str;
}
