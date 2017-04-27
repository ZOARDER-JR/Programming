#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<iomanip>
#include<utility>
#include<stack>
#include<queue>
#include<list>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
#include<string>
#include<deque>

using namespace std;

int main()
{
	int n,i,j,d;
	long long cnt,sum,arr[11];

	for(i=1;i<=10;i++)
	{
		arr[i]=9*pow(10.0,(i-1)*1.0);
	}

	cin >> n;

	d=log10(n*1.0)+1;

	if(d==1)
	{
		cout << n <<endl;
	}
	else
	{
		cnt=sum=0;

		for(i=1;i<d;i++)
		{
			cnt+=(i*arr[i]);
			sum+=arr[i];
		}

		cnt+=((n-sum)*d);

		cout << cnt <<endl;
	}
	return 0;
}