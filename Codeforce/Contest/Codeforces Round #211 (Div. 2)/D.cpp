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
	int m,n,a,p,b,p_sum,temp_s,temp,cnt,i;
	map<int,bool> B;
	map<int,bool>::iterator it;

	while(cin >> n >> m >>a)
	{
		p_sum=0;
		B.clear();

		for(i=1;i<=n;i++)
		{
			cin >> p;
			p_sum+=p;
		}
		for(i=1;i<=m;i++)
		{
			cin >> b;
			B[b]=true;
		}

		temp=p_sum+a;cnt=0;

		for(it=B.begin();it!=B.end();it++)
		{
			p=it->first;

			if(p>temp)
			{
				break;
			}
			cnt++;
			temp-=p;
			if(cnt==n)
			{
				break;
			}
		}

		p_sum-=temp;

		if(p_sum<0)
		{
			p_sum=0;
		}

		cout << cnt << " " << p_sum <<endl;


	}
	return 0;
}