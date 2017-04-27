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

int order(char a);
bool comp(const char &a,const char &b);

int main()
{
	int t;
	string str;

	scanf("%d",&t);

	while(t--)
	{
		cin >> str;

		sort(str.begin(),str.end(),comp);

		do
		{
			cout << str <<endl;
		}while(next_permutation(str.begin(),str.end(),comp));
	}
	return 0;
}

int order(char a)
{
	if(isupper(a))
	{
		return (a-'A')*2;
	}
	else
	{
		return (a-'a')*2+1;
	}
}
bool comp(const char &a,const char &b)
{
	return order(a) < order(b);
}