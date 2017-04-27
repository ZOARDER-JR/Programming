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
	int i,j,k,l,t,a,b,c,temp;
	bool flag;

	for(i=2;i<=200;i++)
	{
		for(j=2;j<i;j++)
		{
			flag=false;

			for(k=j;k<i;k++)
			{
				for(l=k;l<i;l++)
				{
					t=(j*j*j)+(k*k*k)+(l*l*l);

					if(t>(i*i*i))
					{
						break;
					}

					if(t==(i*i*i))
					{
						a=j;b=k;c=l;

						if(a>b)
						{
							temp=a;
							a=b;
							b=temp;
						}
						if(a>c)
						{
							temp=a;
							a=c;
							c=temp;
						}
						if(b>c)
						{
							temp=b;
							b=c;
							c=temp;
						}

						cout << "Cube = " << i << ", Triple = (" << a << "," << b << "," << c << ")" <<endl; 
					
					}
				}
			}
		}
	}
	return 0;
}