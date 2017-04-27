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
	int h1,h2,m1,m2,t1,t2;

	while(cin >> h1 >> m1 >> h2 >> m2 )
	{
		if(h1==0 && h2==0 && m1==0 &&m2==0)
		{
			break;
		}

		if(h1==h2 && m1<=m2)
		{
			t1=(h1*60)+m1;
			t2=(h2*60)+m2;
		}
		else if(h1>=h2)
		{
			t1=(h1*60)+m1;
			t2=((h2+24)*60)+m2;
		}
		else
		{
			t1=(h1*60)+m1;
			t2=(h2*60)+m2;
		}

		cout << t2-t1 <<endl;
	}
	return 0;
}