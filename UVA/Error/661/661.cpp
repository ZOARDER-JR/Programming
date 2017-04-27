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
	int n,m,c,N[20],c_temp,max,i,M,j=1;
	bool flag,mark[20];

	while(cin >> n >> M >> c)
	{
		memset(mark,false,sizeof(mark));
		flag=true;
		max=0;

		if(n==0 && M==0 && c==0)
		{
			break;
		}

		for(i=0;i<n;i++)
		{
			cin >> N[i];
		}
		
		c_temp=0;

		for(i=1;i<=M;i++)
		{
			cin >>m;

			if(mark[m-1]==false)
			{
				mark[m-1]=true;
				c_temp+=N[m-1];
			}
			else
			{
				mark[m-1]=false;
				c_temp-=N[m-1];
			}

			if(c_temp>c)
			{
				flag=false;
			}
			else
			{
				if(c_temp>max)
				{
					max=c_temp;
				}
			}
		}

		if(flag)
		{
			cout << "Sequence " << j <<endl;
			cout << "Fuse was not blown." <<endl;
			cout << "Maximal power consumption was " << max << " amperes." <<endl;
		}
		else
		{
			cout << "Sequence " << j <<endl;
			cout << "Fuse was blown." <<endl;
		}
		j++;
		cout <<endl;
	}
	return 0;
}