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
	int num1, num2, temp1, temp2;
	int temp;
	int count, maxC,maxN;

	while(scanf("%d%d",&num1,&num2))
	{

		if(num1==0 && num2==0)
		{
			break;
		}

		maxC = 0;

		if(num1 > num2)
		{
			temp = num1;
			num1 = num2;
			num2 = temp;
		}

		temp1 = num1;
		temp2 = num2;

		while(temp1 <= temp2)
		{
			temp = temp1;
			count = 0;

			do
			{
				if(temp % 2 == 1)
				{
					temp = (3 * temp) + 1;
				}
				else
				{
					temp /= 2;
				}
				count++;
			}while(temp > 1);

			if(count > maxC)
			{
				maxC = count;
				maxN=temp1;
			}
			temp1++;
		}

		cout << "Between " << num1 << " and " << num2 << ", " << maxN << " generates the longest sequence of " << maxC << " values." <<endl;
	}
	return 0;
}