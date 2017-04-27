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
#include<utility>
#include<iomanip>

using namespace std;

int main()
{
	int a,b,temp,i;

	while(cin >> a >> b)
	{
		cout << "[";
		i=0;

		while(b!=0)
		{
			cout << a/b;

			if(i==0)
			{
				cout << ";";
			}
			
			if(i!=0 && (a%b)!=0)
			{
				cout << ",";
			}
			temp=a;
			a=b;
			b=temp%b;
			i++;
		}

		cout <<"]" <<endl;
	}
	return 0;
}