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
	string str;
	int t,n,i;

	cin >> t;

	for(i=1;i<=t;i++)
	{
		cin >> str;

		n=str.size();

		sort(str.begin(),str.end());

		do
		{
			cout << str <<endl;
		}while(next_permutation(str.begin(),str.end()));

		cout << endl;
	}
	return 0;
}