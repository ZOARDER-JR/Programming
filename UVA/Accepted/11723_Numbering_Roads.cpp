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
	int n,r,s,i;

	i=1;

	while(cin >> r >> n )
	{

		if(r==0 && n==0)
			break;

		if(r > (n*27))
		{
			cout << "Case " << i << ": impossible" <<endl;
		}
		else
		{
			if(n >= r)
			{
				cout << "Case " << i << ": " << 0 <<endl;
			}
			else
			{
				r-=n;
				
				/*if(r%n !=0)
				{
					s=r/n;

					cout << "Case " << i << ": " << s+1 <<endl;
				}
				else
				{
					cout << "Case " << i << ": " << r/n <<endl;
				}*/

				s=ceil((r*1.0/n*1.0));

				cout << "Case " << i << ": " << s <<endl;

				
			}
		
		}

		i++;
	}
	return 0;
}