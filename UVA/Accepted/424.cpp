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

int num[100];
int total[100];
int mx=0,n;

void StoI(char a[])
{
	int i=strlen(a)-1,j=99;
	memset(num,0,sizeof(num));

	while(i>=0)
	{
		num[j]=a[i]-'0';
		i--;
		j--;
	}

	if(strlen(a) > mx)
	{
		mx=strlen(a)-1;
	}
}

void addIA(int a[])
{
	int i;
	
	for(i=99;i>=99-mx;i--)
	{
		if(i!=99-mx)
		{
			if(total[i]+num[i]>9)
			{
				total[i]=(total[i]+num[i])%10;
				total[i-1]+=1;
			}
			else
			{
				total[i]+=num[i];
			}
		}
		else
		{
			total[i]+=num[i];
		}
	}
}

int main()
{
	char num1[100];
	int i;
	memset(total,0,sizeof(total));

	while(gets(num1) && num1[0]!='0')
	{
		StoI(num1);
		addIA(num);
	}

	i=99-mx;

	while(i<=99)
	{
		cout << total[i];
		i++;
	}

	cout<<endl;

	return 0;
}