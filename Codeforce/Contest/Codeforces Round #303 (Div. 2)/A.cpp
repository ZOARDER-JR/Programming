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
	int n,i,j,cnt=0,s;
	int A[105][105];
	bool car[102]={false};
	bool flag;

	cin >> n;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin >> A[i][j];
		}
	}

	for(i=1;i<=n;i++)
	{
		flag=true;
		for(j=1;j<=n;j++)
		{
			if(A[i][j]== 1 || A[i][j] == 3)
			{
				flag=false;
			}
		}

		if(flag)
		{
			car[i]=true;
			cnt++;
		}
	}

	if(cnt > 0)
	{
		cout << cnt <<endl;

		flag=false;

		for(i=1;i<=n;i++)
		{
			if(flag && car[i] == true)
			{
				cout << " ";
			}
			if(car[i] == true)
			{
				cout << i;
				flag=true;
			}
		}
	}
	else
	{
		cout << 0;
	}

	cout <<endl;
	return 0;
}