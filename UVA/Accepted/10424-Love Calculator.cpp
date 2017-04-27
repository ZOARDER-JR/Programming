#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int Addigit(int a)
{
	if(a<10)
	{
		return a;
	}
	else
	{
		int temp,total=0;

		while(a/10!=0)
		{
			temp=a%10;
			a/=10;
			total+=temp;
		}

		total+=a;

		return Addigit(total);
	}
}

int main()
{
	char name1[25],name2[25];
	int n1,n2,i,j,temp1,temp2;
	float rslt;

	while(gets(name1) && gets(name2))
	{
		i=j=0;
		n1=n2=0;

		while(name1[i]!='\0')
		{
			if(isalpha(name1[i]))
			{
				if(islower(name1[i]))
				{
					n1+=toupper(name1[i])-64;
				}
				else
				{
					n1+=name1[i]-64;
				}	
			}
			i++;
		}
		while(name2[j]!='\0')
		{
			if(isalpha(name2[j]))
			{
				if(islower(name2[j]))
				{
					n2+=toupper(name2[j])-64;
				}
				else
				{
					n2+=name2[j]-64;
				}
			}
			j++;
		}

		temp1=Addigit(n1);
		temp2=Addigit(n2);
	
		if(temp1>temp2)
		{
			rslt=((temp2*1.0)/(temp1*1.0))*100;
			printf("%.2f",rslt);
			cout << " %" <<endl;
		}
		else
		{
			rslt=((temp1*1.0)/(temp2*1.0))*100;
			printf("%.2f",rslt);
			cout << " %" <<endl;
		}
	}
	return 0;
}

