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
	long long n,sum,temp,t_term,n_term;
	int i;

	while(cin >> n)
	{
		n_term=(n+1)/2;
		t_term=(n_term*(2+((n_term-1)*2)))/2;
		temp=(t_term*2)-1;
		sum=0;

		for(i=0;i<=4 && (temp-i)>0;i=i+2)
		{
			sum+=(temp-i);
		}

		cout << sum <<endl;
	}
	return 0;
}