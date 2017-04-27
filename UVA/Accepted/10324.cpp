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
	char n[1000000];
	int i,j,k,a,b,q;
	bool flag,mark;

	i=1;

	while(cin >> n)
	{

		if(strcmp(n,"\n")==0)
		{
			break;
		}

		cin >> q;
		mark=true;

		for(j=1;j<=q;j++)
		{
			flag=true;

			cin >> a >> b;
			if(mark)
			{
				cout << "Case " << i << ":" <<endl;
				mark=false;
			}

			if(a > b)
			{
				int temp=a;
				a=b;
				b=temp;
			}

			for(k=a+1;k<=b;k++)
			{
				if(n[a]!=n[k])
				{
					flag=false;
					break;
				}
			}

			if(flag)
			{
				cout << "Yes" <<endl;
			}
			else
			{
				cout << "No" <<endl;
			}
		}

		i++;
	}
	return 0;
}