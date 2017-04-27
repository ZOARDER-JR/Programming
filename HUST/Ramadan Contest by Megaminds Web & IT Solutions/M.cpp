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
	unsigned int a, b, c;
	int i, j, temp;

	while (cin >> a >> b)
	{
		vector<int> A(32, 0);
		vector<int> B(32, 0);

		i = 31;
		while (a != 0)
		{
			A[i] = a % 2;
			a /= 2;
			i--;
		}
		i = 31;
		while (b != 0)
		{
			B[i] = b % 2;
			b /= 2;
			i--;
		}

		c = 0;

		for (i = 0, j = 31; i<32; i++, j--)
		{
			if (A[j] == B[j])
			{
				c += 0;
			}
			else
			{
				temp = (1 * pow(2 * 1.0, i));
				c += temp;
			}
		}

		cout << c << endl;
	}
	return 0;
}