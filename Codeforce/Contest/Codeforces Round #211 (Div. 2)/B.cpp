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
	int n,k,h1,temp,i;
	long long sum,min;
	vector<int> h;

	while(cin >> n >> k)
	{
		sum=0;
		h.clear();
		h.push_back(0);
		for(i=1;i<=n;i++)
		{
			cin >> h1;

			h.push_back(h1);

			sum+=h[i];
			if(i==k)
			{
				min=sum;
				temp=1;
			}
			else if(i>k)
			{
				sum-=h[i-k];

				if(sum<min)
				{
					temp=(i-k)+1;
				}
			}
		}

		cout << temp <<endl;
	}
	return 0;
}