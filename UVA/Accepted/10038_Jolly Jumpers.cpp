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
	int n,a,tem1,tem2,b;
	bool chk[3000],mark,first;

	while(cin >> n)
	{
		memset(chk,false,n);
		tem1 = n;
		mark = false;
		first = true;

		while(tem1--)
		{
			cin >> a;	
			if(mark)
			{
				b = abs(a - tem2);
				if(b < n)
				{
					if(chk[b])
					{
						mark = false;
					}
					else
					{
						chk[b] = true;
					}
				}
				else
				{
					mark = false;
				}
			}
			tem2 = a;
			if(first)
			{
				mark = true;
				first = false;
			}
		}
		
		if(mark)
		{
			cout << "Jolly" <<endl;
		}
		else
		{
			cout << "Not jolly" <<endl;
		}
	}
	return 0;
}