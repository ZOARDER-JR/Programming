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
	string str[10];

	str[0]="O-|-OOOO";str[1]="O-|O-OOO";str[2]="O-|OO-OO";str[3]="O-|OOO-O";str[4]="O-|OOOO-";
	str[5]="-O|-OOOO";str[6]="-O|O-OOO";str[7]="-O|OO-OO";str[8]="-O|OOO-O";str[9]="-O|OOOO-";

	long long n;

	while(cin >> n)
	{

		if(n==0)
		{
			cout << str[0] <<endl;
		}
		else
		{
			while(n>0)
			{
				cout << str[n%10] << endl;

				n/=10;
			}
		}
	}


	return 0;
}