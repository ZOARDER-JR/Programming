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
	int c,n,num[1000],cnt,i,total;;
	double av,pr;

	cin >> c;

	while(c--)
	{
		cin >> n;
		total=0;

		for(i=0;i<n;i++)
		{
			cin >> num[i];
			total+=num[i];
		}

		av=(total*1.0)/(n*1.0);
		cnt=0;

		for(i=0;i<n;i++)
		{
			if(num[i]>av)
			{
				cnt++;
			}
		}

		pr=((cnt*1.0)/(n*1.0))*100.00;

		cout << fixed << setprecision(3) << pr << "%" << endl;
		
	}
	return 0;
}