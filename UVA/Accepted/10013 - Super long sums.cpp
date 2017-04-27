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

#define M 1000002
int n1[M];
int n2[M];
int rslt[M];

int main()
{
	//int n1[1000000],n2[1000000],rslt[1000000];
	int m,n,i,j,cry,sum;
	bool flag=false;

	scanf("%d",&n);

	while(n--)
	{
		scanf("%d",&m);

		for(i=0;i<m;i++)
		{
			scanf("%d%d",&n1[i],&n2[i]);
		}

		cry=0;

		if(flag)
		{
			cout <<endl;
		}
		else
		{
			flag=true;
		}

		for(i=m-1;i>=0;i--)
		{
			sum=n1[i]+n2[i]+cry;
			rslt[i]=sum%10;
			cry=sum/10;

		}

		for(i=0;i<m;i++)
		{
			cout << rslt[i];
		}

		cout <<endl;
	}
	return 0;
}