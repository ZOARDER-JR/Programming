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
	bool prime[2010],flag;
	int i,j,k,t;
	char str[2010],ch;
	map<char,int> m;
	map<char,int>::iterator it;

	memset(prime,true,sizeof(prime));

	prime[0]=prime[1]=false;
	
	for(i=2;i<=2010;i++)
	{
		flag=true;
		for(j=2;j<=sqrt(i*1.0);j++)
		{
			if(i%j==0)
			{
				flag=false;
				break;
			}
		}

		if(flag)
		{
			for(k=i;(i*k)<=2010;k++)
			{
				prime[i*k]=false;
			}
		}
	}

	cin >> t;
	ch=getchar();

	for(i=1;i<=t;i++)
	{
		j=0;
		gets(str);

		while(str[j]!='\0')
		{
			it=m.find(str[j]);

			if(it!=m.end())
			{
				m[str[j]]++;
			}
			else
			{
				m[str[j]]=1;
			}

			j++;
		}

		cout << "Case " << i << ": ";
		flag=false;

		for(it=m.begin();it!=m.end();it++)
		{
			if(prime[it->second])
			{
				cout << it->first;
				flag=true;
			}
		}

		if(flag==false)
		{
			cout << "empty";
		}

		cout <<endl;
		m.clear();
	}
	return 0;
}