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
	char str[2500];
	int i,j,l,sum,n,k,r;

	cin >> n;

	for(k=0;k<n;k++)
	{
		cin >> r >> str;
		l=strlen(str);

		if(l==1 && str[0]=='0')
		{
			break;
		}

		j=0;

		for(i=0;i<l;i++)
		{
			sum=(j*10)+(str[i]-'0');
			j=sum%r;
		}

		cout << j <<endl;
	}
	return 0;
}