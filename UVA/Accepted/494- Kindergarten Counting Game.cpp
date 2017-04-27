#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int i,cnt,j;
	bool flag;
	string str,temp;

	while(getline(cin,str))
	{
		temp.assign("\0");
		if(isalpha(str[0]))
		{
			temp.push_back(str[0]);
			flag=false;
		}
		else
		{
			flag=true;
		}

		for(i=1;i<str.size();i++)
		{
			if(isalpha(str[i]))
			{
				temp.push_back(str[i]);
				flag=false;
			}
			else
			{
				if(flag==false)
				{
					temp.push_back(' ');
					flag=true;
				}
			}
		}

		cnt=1;
		
		for(j=0;j<(temp.size()-1);j++)
		{
			if(temp[j]==' ')
			{
				cnt++;
			}
		}

		cout << cnt <<endl;
	}
	return 0;
}