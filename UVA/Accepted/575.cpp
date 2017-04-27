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
#include<utility>
#include<iomanip>

using namespace std;

int main()
{
	char num[50];
	int n,i,total,temp,x;

	while(cin >> num)
	{
		n=strlen(num);
		total=0;
		x=n;

		if(n==1 && num[0]=='0')
		{
			break;
		}

		for(i=0;i<n;i++)
		{
			temp=num[i]-'0';
			temp*=(pow(2.0,x)-1);
			total+=temp;
			x--;
		}

		cout << total <<endl;
	}
	return 0;
}