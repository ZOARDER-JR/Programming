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
	int n,x1,x2,y1,y2,cnt;

	scanf("%d",&n);

	cnt=0;

	while(n--)
	{
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

		cnt+=((x2-x1+1)*(y2-y1+1));
	}

	printf("%d\n",cnt);
	return 0;
}