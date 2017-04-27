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
	double u,v,t,a,s;
	int n,i=1;

	while(cin >> n && n!=0)
	{
		switch(n)
		{
		case 1:
			cin >> u >> v >> t;

			s=(u+v)*t/2;
			a=(v-u)/t;

			printf("Case %d: %.3lf %.3lf\n",i,s,a);
			break;
		case 2:
			cin >> u >> v >> a;
			
			t=(v-u)/a;
			s=(u+v)*t/2;
			

			printf("Case %d: %.3lf %.3lf\n",i,s,t);
			break;
		case 3:
			cin >> u >> a >> s;

			v=sqrt((u*u)+(2*a*s));
			t=(v-u)/a;

			printf("Case %d: %.3lf %.3lf\n",i,v,t);
			break;
		case 4:
			cin >> v >> a >> s;

			u=sqrt((v*v)-(2*a*s));
			t=(v-u)/a;

			printf("Case %d: %.3lf %.3lf\n",i,u,t);
			break;
		}

		i++;
	}
	return 0;
}
