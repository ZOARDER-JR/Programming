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
#include<iomanip>

using namespace std;

int main()
{
	int i,cnt,temp,p;
	int n,m;
	bool flag,mark;
	vector<int> M;

	while(cin >> n >> m)
	{
		M.clear();
		flag=true;mark=true;
		temp=0;cnt=0;
		if(m==0)
		{
			cout << "YES" <<endl;
		}
		else
		{
			for(i=0;i<m;i++)
			{
				cin >> p;

				if(p==1 || p==n)
				{
					flag=false;
				}

				M.push_back(p);
			}

			if(flag)
			{
				sort(M.begin(),M.end());
				for(i=0;i<M.size()-1;i++)
				{
					if(temp==2)
					{
						temp=0;
						cnt=0;
					}
					if((M[i]+1)==M[i+1])
					{
						cnt++;
					}
					if(cnt==2)
					{
						mark=false;
						break;
					}
					temp++;
				}

				if(mark)
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
		}
	}

	return 0;
}