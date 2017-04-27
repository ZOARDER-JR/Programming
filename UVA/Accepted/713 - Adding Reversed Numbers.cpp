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

int mx(int a,int b){return ( a > b ? a : b );}
int mn(int a,int b){return ( a > b ? a : b );}

using namespace std;

int main()
{
	int n,i,l1,l2,carry,sum;
	int num1[205],num2[205],rslt[210];
	char num[205];

	cin >> n;

	while(n--)
	{
		memset(num1,0,sizeof(num1));
		memset(num2,0,sizeof(num2));
		memset(rslt,0,sizeof(rslt));

		cin >> num;
		
		l1=strlen(num);

		for(i=0;i<l1;i++)
			num1[i]=num[i]-'0';

		cin >> num;
		
		l2=strlen(num);

		for(i=0;i<l2;i++)
			num2[i]=num[i]-'0';

		carry=0;

		for(i=0;i<mx(l1,l2);i++)
		{
			sum=num1[i]+num2[i]+carry;
			rslt[i]=sum%10;
			carry=sum/10;
		}

		rslt[i]=carry;

		for(i=0;;i++)
			if(rslt[i]!=0)
				break;


		for(;i<mx(l1,l2);i++)
		{
			cout << rslt[i];
		}

		if(rslt[i]!=0)
			cout << rslt[i];

		cout <<endl;
	}
	return 0;
}