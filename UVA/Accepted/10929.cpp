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
	char n[1001];
	int i,j,s;

	while(cin >> n)
	{
		if((n[0]=='0' && strlen(n)==1))
		{
			break;
		}
		i=strlen(n);
		s=0;

		for(j=0;j<i;j++)
		{
			s=(s*10)+(n[j]-'0');
			s%=11;
		}

		if(s==0)
		{
			cout << n << " is a multiple of 11." <<endl;
		}
		else
		{
			cout << n << " is not a multiple of 11." <<endl;
		}
	}
	return 0;
}