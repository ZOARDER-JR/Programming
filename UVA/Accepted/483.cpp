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
	int i,j;
	bool flag;

	while(getline(cin,str))
	{
		flag=false;

		for(i=0;i<=str.length();i++)
		{
			
			if(str[i]==' ')
			{
				if(flag)
				{
					cout << " ";	
				}
				for(j=m.size()-1;j>=0;j--)
				{
					cout << m[j];
				}
				m.clear();
				flag=true;
			}
			else if(str[i]=='\0')
			{
				if(flag)
				{
					cout << " ";	
				}
				for(j=m.size()-1;j>=0;j--)
				{
					cout << m[j];
				}
				m.clear();
				flag=true;
			}
			else
			{
				m.push_back(str[i]);
			}
		}

		cout <<endl;
	}
	return 0;
}