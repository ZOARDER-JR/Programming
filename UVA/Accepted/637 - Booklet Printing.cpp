#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<algorithm>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000

typedef long long LL;

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

struct page
{
	int num[4];
}sheet[101];

void reset();

int main()
{
	int n,i;

	while(cin >> n)
	{
		if(n==0)
		{
			break;
		}

		reset();

		int s,num,cnt=0;

		s=n;
		num=n/4 + (n%4==0?0:1);

		for(i=0;i<num;i++)
		{
			if(n)
			{
				sheet[i].num[1]=++cnt;
				n--;
			}
			if(n)
			{
				sheet[i].num[2]=++cnt;
				n--;
			}
		}
		
		for(i=num-1;i>=0;i--)
		{
			if(n)
			{
				sheet[i].num[3]=++cnt;
				n--;
			}
			if(n)
			{
				sheet[i].num[0]=++cnt;
				n--;
			}
		}

		cout << "Printing order for " << s << " pages:" <<endl;

		for(i=0;i<num;i++)
		{
			if(sheet[i].num[0] || sheet[i].num[1])
			{
				if(sheet[i].num[0])
				{
					cout << "Sheet "<< i+1 << ", front: " << sheet[i].num[0];	
				}
				else
				{
					cout << "Sheet "<< i+1 << ", front: Blank";
				}
				if(sheet[i].num[1])
				{
					cout << ", " << sheet[i].num[1] <<endl;	
				}
				else
				{
					cout << ", "<< "Blank"<<endl;
				}
			}
			if(sheet[i].num[2] || sheet[i].num[3])
			{
				if(sheet[i].num[2])
				{
					cout << "Sheet "<< i+1 << ", back : " << sheet[i].num[2];	
				}
				else
				{
					cout << "Sheet "<< i+1 << ", back : Blank";
				}
				if(sheet[i].num[3])
				{
					cout << ", " << sheet[i].num[3] <<endl;	
				}
				else
				{
					cout << ", "<< "Blank"<<endl;
				}
			}
				
		}
	}
	return 0;
}

void reset()
{
	int i,j;

	for(i=0;i<26;i++)
	{
		for(j=0;j<4;j++)
		{
			sheet[i].num[j]=0;
		}
	}
}