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

int main()
{
	int l,i,j,cnt,temp,c;
	vector<int> C;
	bool flag;

	while(scanf("%d",&l) && l!=0)
	{
		cnt=0;

		for(j=0;j<l;j++)
		{
			scanf("%d",&c);
			C.push_back(c);
		}

		while(is_sorted(C.begin(),C.end())==false)
		{
			for(j=0;j<(l-1);j++)
			{
				if(C[j]>C[j+1])
				{
					temp=C[j+1];
					C[j+1]=C[j];
					C[j]=temp;
					cnt++;
					flag=0;
				}
			}

		}

		if(cnt%2==0)
		{
			printf("Carlos\n");
		}

		else
		{
			printf("Marcelo\n");
		}

		C.clean();
	}
	return 0;
}

