#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,s,d,i;
	long long max,min;

	cin >> n;

	for(i=1;i<=n;i++)
	{
		cin >> s >> d;
		max=min=0;
	
		if(s<d)
		{
			cout << "impossible" <<endl;
		}
		else
		{
			if((s-d)%2!=0)
			{
				cout << "impossible" <<endl;
			}
			else
			{
				max=(s+d)/2;
				min=(s-d)/2;

				cout << max << " " << min << endl;
			}
		}
		
	}
	return 0;
}