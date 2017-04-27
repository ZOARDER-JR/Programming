#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	char str[130],ch;
	int i,j,n;
	stack<char> stk;
	bool flag,chk=true;

	cin >> n;

	while(n--)
	{
		if(chk)
		{
			ch=getchar();
			chk=false;
		}

		gets(str);

		flag=true;

		for(i=0;i<strlen(str);i++)
		{
			if(stk.empty())
			{
				if(str[i]== '(' || str[i]== '[')
				{
					stk.push(str[i]);
				}
				else
				{
					flag=false;
					break;
				}
			}
			else
			{
				if(str[i]== '(' || str[i]== '[')
				{
					stk.push(str[i]);
				}
				else if(str[i]==')' && stk.top()=='(')
				{
					stk.pop();
				}
				else if(str[i]==']' && stk.top()=='[')
				{
					stk.pop();
				}

			}
		}

		if(flag && stk.empty())
		{
			cout << "Yes" <<endl;
		}
		else
		{
			cout << "No" <<endl;
		}

		while(!stk.empty())
		{
			stk.pop();
		}

	}
	return 0;
}