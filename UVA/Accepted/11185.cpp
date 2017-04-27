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
	long long n;
	int i,cnt;
	vector<int> m;
	vector<int>::iterator it;

	while(cin >> n && n>=0)
	{
		m.clear();
		cnt=0;
		if(n==0)
		{
			cout << 0;
		}
		else
		{
			while(n>0)
			{
				m.push_back(n%3);
				n/=3;
				cnt++;
			}

			for(i=cnt-1;i>=0;i--)
			{
				cout << m[i];
			}
		}

		cout <<endl;
	}
	return 0;
}