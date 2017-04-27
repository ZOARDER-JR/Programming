#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<iomanip>
#include<utility>
#include<stack>
#include<queue>
#include<list>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
#include<string>
#include<deque>

using namespace std;

int main()
{
	long long k,w,n,rslt;

	cin >> k >> n >> w;

	rslt= k*((w*(w+1))/2);

	if(rslt-n >0)
	{
		cout << rslt-n <<endl;
	}
	else
	{
		cout << 0 <<endl;
	}
	return 0;
}