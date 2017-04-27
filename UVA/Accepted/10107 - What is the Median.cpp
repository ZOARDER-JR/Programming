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

class compare
{
public:
	bool operator()(int a,int b)
	{
		return a < b ;
	}
};

int main()
{
	int i,m,temp;
	int num[10001];
	

	i=m=temp=0;

	while(cin >> num[i])
	{
		i++;
		temp=i/2;

		sort(num,num+i);

		if(i%2 == 0)
		{
			m=(num[temp]+num[temp-1])/2;
		}
		else
		{
			m=num[temp];
		}

		cout << m <<endl;
	}
	return 0;
}