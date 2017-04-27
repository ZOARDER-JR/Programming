#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
	int num1[260],num2[260],rslt[600];
	char n1[260],n2[260];
	int i,j,sum,carry;

	while(scanf("%s%s",&n1,&n2)==2)
	{
		memset(num1,0,sizeof(num1));
		memset(num2,0,sizeof(num2));
		memset(rslt,0,sizeof(rslt));

		for(i=0,j=strlen(n1)-1;i<strlen(n1);i++,j--)
		{
			num1[j]=n1[i]-'0';
		}
		for(i=0,j=strlen(n2)-1;i<strlen(n2);i++,j--)
		{
			num2[j]=n2[i]-'0';
		}

		for(i=0;i<strlen(n2);i++)
		{
			carry = 0;
			for(j=0;j<strlen(n1);j++)
			{

				sum = rslt[i+j] + carry + num1[j]*num2[i];
				rslt[i+j] = sum%10;
				carry = sum/10;
			}

			rslt[i+j]=carry;
		}

		for(i=599;i>=1;i--)
		{
			if(rslt[i]!=0)
				break;
		}

		for(;i>=0;i--)
		{
			cout << rslt[i];
		}

		cout <<endl;
	}
	return 0;
}