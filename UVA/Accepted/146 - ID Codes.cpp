#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<utility>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000

typedef long long LL;

LL mx(LL a,LL b){return (a > b? a : b);}
LL mn(LL a,LL b){return (a < b? a : b);}

using namespace std;

int main()
{
	string str;

	while(cin >> str)
	{
		if(str == "#")
		{
			break;
		}

		if(!next_permutation(str.begin(),str.end()))
		{
			cout << "No Successor" <<endl;
		}
		else
		{
			cout << str <<endl;
		}
	}
	return 0;
}