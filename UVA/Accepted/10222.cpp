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
	string str;
	int i;
	map<char,char> m;

	m['=']='0';m['-']='9';m['0']='8';m['9']='7';m['8']='6';m['7']='5';m['6']='4';m['5']='3';m['4']='2';
	m['3']='1';m['2']='`';m[']']='p';m['[']='o';m['p']='i';m['o']='u';m['i']='y';m['u']='t';m['y']='r';
	m['t']='e';m['r']='w';m['e']='q';m['\\']=';';m['\'']='l';m[';']='k';m['l']='j';m['k']='h';m['j']='g';
	m['h']='f';m['g']='d';m['f']='s';m['d']='a';m['/']=',';m['.']='m';m[',']='n';m['m']='b';m['n']='v';
	m['b']='c';m['v']='x';m['c']='z';m[' ']=' ';

	getline(cin,str);

	for(i=0;i<str.size();i++)
	{
		if(isupper(str[i]))
		{
			str[i]=tolower(str[i]);
		}

		cout << m[str[i]];
	}

	cout <<endl;


	return 0;
}