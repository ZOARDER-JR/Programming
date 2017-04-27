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
	string str;
	vector<char> m;
	int n,i,j,temp,grp;
	char ch;

	while(cin >> n && n!=0)
	{
		ch=getchar();
		getline(cin,str);
		grp=(str.length()/n);

		for(i=0,temp=1;i<str.length();i++,temp++)
		{
			m.push_back(str[i]);

			if(temp==grp)
			{
				for(j=m.size()-1;j>=0;j--)
				{
					cout << m[j];
				}

				temp=0;
				m.clear();
			}
		}

		cout  <<endl;
		m.clear();
	}
	return 0;
}