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

int main()
{
	map<char,int> m;
	map<char,int>::iterator it,ir;

	m['B']=1;m['F']=1;m['P']=1;m['V']=1;m['C']=2;m['G']=2;m['J']=2;m['K']=2;m['Q']=2;m['S']=2;
	m['X']=2;m['Z']=2;m['D']=3;m['T']=3;m['L']=4;m['M']=5;m['N']=5;m['R']=6;

	char str[20];
	int i,j;

	while(gets(str))
	{
		i=0;
		while(str[i]!='\0')
		{
			if(i==0)
			{
				it=m.find(str[i]);

				if(it!=m.end())
				{
					cout << it->second;
				}
			}

			else
			{
				it=m.find(str[i]);
				ir=m.find(str[i-1]);

				if(it!=m.end() && ir!=m.end() && (it->second != ir->second))
				{
					cout << it->second;
				}
				else if(it!=m.end() && ir==m.end())
				{
					cout << it->second;
				}
					
			}

			i++;
		}

		cout <<endl;
	}
	return 0;
}