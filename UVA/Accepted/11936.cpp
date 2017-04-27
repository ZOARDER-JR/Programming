#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int* Sort(int z[])
{
	int i,j,temp;

	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(z[i]>z[j])
			{
				temp=z[i];
				z[i]=z[j];
				z[j]=temp;
			}
		}
	}

	return z;
}

int main()
{
	int n,i;
	int a[3];

	cin >>n;

	while(n--)
	{
		for(i=0;i<3;i++)
		{
			cin >> a[i];
		}

		Sort(a);

		if(a[0]+a[1]>a[2])
		{
			cout << "OK" <<endl;
		}
		else
		{
			cout << "Wrong!!" <<endl;
		}
	}
	return 0;
}