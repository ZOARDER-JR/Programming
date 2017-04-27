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
	int t,i;
	double d,u,v,t_t,t_p,temp;

	cin >> t;

	for(i=1;i<=t;i++)
	{
		cin >> d >> v >> u;

		if(v==0 || u==0 || v>=u)
		{
			cout << "Case " << i << ": can't determine" << endl;
		}
		else
		{
			temp=(u*u)-(v*v);

			t_t=d/u;
			t_p=d/(sqrt(temp));

			cout << "Case " << i << ": " << fixed << setprecision(3) << t_p-t_t << endl;
		}
	}
	return 0;
}