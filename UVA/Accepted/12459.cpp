#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	long long A[81];
	int i;
	A[0]=1;A[1]=1;
	for(i=2;i<=80;i++)
	{
		A[i]=A[i-2]+A[i-1];
	}

	while(cin >> i && i!=0)
	{
		cout << A[i] <<endl;
	}



	return 0;
}