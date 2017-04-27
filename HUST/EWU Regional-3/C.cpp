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

using namespace std;

int main()
{
	long long n,k,temp;
	int cnt;
	bool flag;

	while(cin >> n >>k)
	{
		flag=true;

		if(n<=k)
		{
			cout << 1 <<endl;
		}
		else
		{
			temp=k-1;
			cnt=0;

			while(n>0)
			{
				if(temp==0)
				{
					flag=false;
					break;
				}
				else if(temp==1)
				{
					n-=2;
					temp--;
					cnt++;	
				}
				else
				{
					n-=temp;
					temp--;
					cnt++;
				}
			}

			if(flag)
			{
				cout << cnt <<endl;
			}
			else
			{
				cout << -1 <<endl;
			}
		}
	}
	return 0;
}