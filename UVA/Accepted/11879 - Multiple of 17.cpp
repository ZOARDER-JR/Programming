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
	char str[1200];
	int i,j,l,sum;

	while(cin >> str)
	{
		l=strlen(str);

		if(l==1 && str[0]=='0')
		{
			break;
		}

		j=0;

		for(i=0;i<l;i++)
		{
			sum=(j*10)+(str[i]-'0');
			j=sum%17;
		}

		if(j==0)
			cout << 1 <<endl;
		else
			cout << 0 <<endl;
	}
	return 0;
}