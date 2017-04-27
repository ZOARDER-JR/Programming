#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	int n[100],sum,i,j,cnt;
	string str[100];

	i=0;

	while(cin >> n[i] && n[i])
	{
		sum=0;

		for(j=2;j<sqrt(n[i]*1.0);j++)
		{
			if(n[i]%j==0)
			{
				sum+=j;
				sum+=(n[i]/j);
			}
		}

		if(n[i]>1)
			sum++;

		if(sum==n[i])
		{
			str[i]= "PERFECT";
		}
		else if(sum < n[i])
		{
			str[i]= "DEFICIENT";
		}
		else
		{
			str[i]= "ABUNDANT";
		}

		i++;
	}

	cnt=i;

	cout << "PERFECTION OUTPUT" <<endl;

	for(i=0;i<cnt;i++)
	{
		printf("%5d",n[i]);
		cout << "  " << str[i] <<endl;
	}

	cout << "END OF OUTPUT" <<endl;
}