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
#include<list>
#include<algorithm>
#include<utility>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000

typedef long long LL;

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

string sum(string str1,string str2);
string reverse(string str);

int main()
{
	string fb[1001];

	fb[0]=(1+'0');
	fb[1]=(2+'0');

	for(int i=2;i<=1000;i++)
	{
		fb[i]=sum(fb[i-1],fb[i-2]);
	}

	int n;

	while(cin >> n)
	{
		cout << fb[n] <<endl;
	}
	return 0;
}

string sum(string str1,string str2)
{
	if(str1.size() < str2.size())
	{
		swap(str1,str2);
	}
	string temp;
	string::reverse_iterator it1,it2;
	int carry=0,a,b,c;

	for(it1=str1.rbegin(),it2=str2.rbegin();it2 != str2.rend();it1++,it2++)
	{
		a=*it1-'0';
		b=*it2-'0';
		c=a+b+carry;
		temp.push_back((c%10)+'0');
		carry=c/10;
	}
	for(;it1!=str1.rend();it1++)
	{
		a=*it1-'0';
		c=a+carry;
		temp.push_back((c%10)+'0');
		carry=c/10;
	}
	if(carry != 0)
	{
		temp.push_back(carry+'0');
	}

	return reverse(temp);
}
string reverse(string str)
{
	string temp;
	string::reverse_iterator it;

	for(it=str.rbegin();it!=str.rend();it++)
	{
		temp.push_back(*it);
	}

	return temp;
}