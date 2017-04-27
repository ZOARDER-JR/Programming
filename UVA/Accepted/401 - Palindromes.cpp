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
#define LL long long

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

int check(string str);
map<char,char> M;

int main()
{
	M['A']='A';M['E']='3';M['H']='H';M['I']='I';M['J']='L';M['L']='J';
	M['M']='M';M['O']='O';M['S']='2';M['T']='T';M['U']='U';M['V']='V';
	M['W']='W';M['X']='X';M['Y']='Y';M['Z']='5';M['1']='1';M['2']='S';
	M['3']='E';M['5']='Z';M['8']='8';M['0']='0';

	string str;
	bool flag=false;

	while(cin >> str)
	{

		int a=check(str);

		switch(a)
		{
		case 1:
			cout << str << " -- is a mirrored string." <<endl;
			break;
		case 2:
			cout << str << " -- is a regular palindrome." <<endl;
			break;
		case 3:
			cout << str << " -- is a mirrored palindrome." <<endl;
			break;
		default:
			cout << str << " -- is not a palindrome." <<endl;
		}

		cout <<endl;
	}

	return 0;
}
int check(string str)
{
	int val=3;

	for(int i=0,j=str.size()-1;i<=j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			val&=1;
		}
		if(str[i]!=M[str[j]])
		{
			val&=2;
		}
	}

	return val;
}