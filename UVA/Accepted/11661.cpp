#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int l,i,min,flag;
	bool mark;
	char ch;
	string str;

	while(cin >>l && l!=0)
	{
		cin >> str;

		 min=l-1; mark=true; i=0;

		while(str[i]!='D' && str[i]!='R' && i<l)
		{
			if(str[i]=='Z')
			{
				mark=false;
				break;
			}
			i++;
		}

		ch=str[i];

		if(mark)
		{
			flag=1;
			for(i=i+1;i<l;i++)
			{
				if(str[i]=='Z')
				{
					mark=false;
					break;
				}
				if(str[i]=='D' || str[i]=='R')
				{
					if(str[i]!=ch)
					{
						if(flag<=min)
						{
							min=flag;
						}
						ch=str[i];
					}

					flag=1;
					
				}
				else
				{
					flag++;
				}
			}

			if(mark)
			{
				cout << min <<endl;
			}
			else
			{
				cout << 0 <<endl;
			}
		}
		else
		{
			cout << 0 <<endl;
		}
	}
	return 0;
}