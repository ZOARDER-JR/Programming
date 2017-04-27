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
	double U,D,F,ini_h,ftg;
	int i,H;

	while(cin >> H >> U >> D >> F )
	{
		if(H==0)
		{
			break;
		}

		ini_h=0;
		ftg=(U*F)/100;

		for(i=1;;i++)
		{
			if((ini_h+U)>H)
			{
				cout << "success on day " << i <<endl;
				break;
			}
			
			ini_h=(ini_h+U)-D;

			if(ini_h<0)
			{
				cout << "failure on day " << i <<endl;
				break;
			}

			if(U-ftg > 0)
			{
				U-=ftg;
			}
			else
			{
				U=0;
			}
		}
	}
	return 0;
}