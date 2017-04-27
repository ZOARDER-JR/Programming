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

using namespace std;

int main()
{
	int a,b,c,cnt=0;
	char sign,ch;
	char eq[15];
	FILE * pFile;

	while(cin >> eq)
	{
		pFile = fopen("myfile.txt","w+");
		fprintf (pFile, "%s",eq);
		rewind (pFile);
		fscanf(pFile,"%d%c%d%c%d",&a,&sign,&b,&ch,&c);

		if(sign=='+')
		{
			if(a+b==c)
			{
				cnt++;
			}
		}
	}

	cout << cnt <<endl;

	return 0;
}