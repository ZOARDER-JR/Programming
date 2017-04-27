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
	int p,b,h,w,i,j,min;
	int ho[20],wk[15],cst[20];
	bool flag,flag1;

	while(cin >> p >> b >> h >> w)
	{
		min=b; flag=false; 

		for(i=0;i<h;i++)
		{
			cin >> ho[i];
			flag1=false;

			for(j=0;j<w;j++)
			{
				cin >> wk[j];

				if(wk[j]>=p)
				{
					flag1=true;
				}
			}

			if(flag1)
			{
				cst[i]=(ho[i]*p);
				if(cst[i]<=b)
				{
					flag=true;

					if(cst[i]<=min)
					{
						min=cst[i];
					}
				}
				
			}
		}

		if(flag)
		{
			cout << min <<endl;
		}
		else
		{
			cout << "stay home" <<endl;
		}
	}
	return 0;
}