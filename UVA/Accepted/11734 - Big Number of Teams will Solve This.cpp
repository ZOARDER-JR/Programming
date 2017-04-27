#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
	char str1[25],str2[25],ch;
	char tok1[20],tok2[20];
	int n,l1,l2,i,j,k;
	bool out,wng;
	
	
	

	cin >> n;
	ch=getchar();

	for(i=1;i<=n;i++)
	{
		gets(str1);
		gets(str2);

		l1=strlen(str1);
		l2=strlen(str2);
		
		out=wng=false;

		for(j=0,k=0;j<l1;j++)
		{
			if(str1[j]!=' ')
			{
				tok1[k]=str1[j];
				k++;
			}
			else
			{
				out=true;
			}
		}

		tok1[k]=0;

		if(strcmp(tok1,str2)==0)
		{
			if(out)
			{
				cout << "Case " << i << ": Output Format Error" <<endl;
			}
			else
			{
				cout << "Case " << i << ": Yes" <<endl;
			}
		}
		else
		{
			cout << "Case " << i << ": Wrong Answer" <<endl;
		}
		
	}
	return 0;
}