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
	int n,k1,k2,i,h,turn=0;
	deque<int> q1,q2,t1,t2;
	bool flag=true;

	cin >> n >> k1;

	for(i=0;i<k1;i++)
	{
		cin >> h;
		q1.push_front(h);
	}

	cin >> k2;

	for(i=0;i<k2;i++)
	{
		cin >> h;
		q2.push_front(h);
	}

	t1=q1;
	t2=q2;

	while(!q1.empty() && !q2.empty())
	{
		if(q1.back() > q2.back())
		{
			q1.push_front(q2.back());
			q1.push_front(q1.back());
			q1.pop_back();
			q2.pop_back();

			turn++;
		}
		else
		{
			q2.push_front(q1.back());
			q2.push_front(q2.back());
			q1.pop_back();
			q2.pop_back();

			turn++;
		}

		if(!q1.empty() && !q2.empty())
		{
 			if(q1 == t1 && q2 == t2 )
			{
				flag=false;
				break;
			}
		}
		else if(turn > 120)
		{
			flag=false;
			break;
		}
	}

	if(flag)
	{
		if(q1.empty())
		{
			cout << turn << " " << 2 <<endl;
		}
		else
		{
			cout << turn << " " << 1 <<endl;
		}
	}
	else
	{
		cout << -1 <<endl;
	}

	return 0;
}