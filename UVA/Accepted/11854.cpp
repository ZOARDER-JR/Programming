#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int a,b,c;
	long long ang;

	while(scanf("%d%d%d",&a,&b,&c))
	{
		if(a==0 && b==0 && c==0)
		{
			break;
		}

		if(a<b)
		{
			int temp;
			temp=b;
			b=a;
			a=temp;
		}
		if(a<c)
		{
			int temp;
			temp=c;
			c=a;
			a=temp;
		}
		if(b<c)
		{
			int temp;
			temp=c;
			c=b;
			b=temp;
		}

		ang=(b*b)+(c*c);

		if((a*a)==ang)
		{
			cout << "right" <<endl;
		}
		else
		{
			cout << "wrong" <<endl;
		}
	}
	return 0;
}