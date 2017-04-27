#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<iomanip>
#include<utility>
#include<stack>
#include<queue>
#include<list>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
#include<string>
#include<deque>

using namespace std;

int main()
{
	int n,m,q,i,j,scr,mx[501]={0},mx_r=-1,tmpmx,almx=0;
	int grd[501][501];
	vector<int> V,V1;

	cin >> n >> m >> q;

	for(i=1;i<=n;i++)
	{
		scr=0;
		tmpmx=0;
		for(j=1;j<=m;j++)
		{
			cin >> grd[i][j];

			if(grd[i][j] == 0)
			{
				if(scr > tmpmx)
				{
					tmpmx = scr;
				}

				scr=0;
			}
			else
			{
				scr++;
			}
		}
		if(scr > tmpmx)
		{
			tmpmx = scr;
		}

		V.push_back(tmpmx);
	}

	for(i=1;i<=q;i++)
	{
		int a,b;

		cin >> a >> b;

		if(grd[a][b] == 1)
		{
			grd[a][b]=0;
		}
		else
		{
			grd[a][b]=1;
		}

		scr=0;
		tmpmx=0;
		for(j=1;j<=m;j++)
		{

			if(grd[a][j] == 0)
			{
				if(scr > tmpmx)
				{
					tmpmx = scr;
				}

				scr=0;
			}
			else
			{
				scr++;
			}
		}
		if(scr > tmpmx)
		{
			tmpmx = scr;
		}

		V[a-1]=tmpmx;
		

		V1=V;
		
		sort(V1.begin(),V1.end());

		cout << V1[n-1] <<endl;
	}
	return 0;
}