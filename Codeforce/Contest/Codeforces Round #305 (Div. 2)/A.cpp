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
	int s,k,i,j,l,sz;
	string str;
	bool flag;

	cin >> str >> k;

	s=str.size();
	flag=true;

	if(s%k == 0)
	{
		sz=s/k;
		for(i=0;i<str.size();i+=sz)
		{
			int val=1;
 
			for(j=i,l=i+sz-1;j<=l;j++,l--)
			{
				if(str[j]!=str[l])
				{
					val&=0;
					break;
				}
			}

			if(val!=1)
			{
				flag=false;
				break;
			}
		}

		if(flag)
		{
			cout << "YES" <<endl;
		}
		else
		{
			cout << "NO" <<endl;
		}
		
	}
	else
	{
		cout << "NO" <<endl;
	}
	return 0;
}