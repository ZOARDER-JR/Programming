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
	int n,i,j,c,cst=0;
	bool bdg[100000]={0};

	cin >> n;

	for(i=1;i<=n;i++)
	{
		cin >> c;

		if(bdg[c-1]==false)
		{
			bdg[c-1]=true;
		}
		else
		{
			for(j=c;j<j+n;j++)
			{
				if(bdg[j]==false)
				{
					bdg[j]=true;
					cst+=fabs((c-1)*1.0-j*1.0);
					break;
				}
			}
		}
	}

	cout << cst <<endl;

	return 0;
}