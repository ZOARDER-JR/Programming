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
	int cnt,i;
	long long n;
	vector<int> m;

	while(cin >> n && n!=0)
	{
		cnt=0;
		m.clear();
		while(n>0)
		{
			m.push_back(n%2);

			if(n%2==1)
			{
				cnt++;
			}

			n/=2;
		}

		cout << "The parity of ";
		for(i=m.size()-1;i>=0;i--)
		{
			cout << m[i];
		}
		
		cout <<" is " << cnt << " (mod 2)." <<endl;
	}
	return 0;
}