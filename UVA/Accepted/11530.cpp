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

using namespace std;

int main()
{
	char msg[101],ch;
	int i,j,cnt,t;
	map<char,int> v;
	map<char,int>::iterator it;

	v['a']=1;v['b']=2;v['c']=3;v['d']=1;v['e']=2;v['f']=3;v['g']=1;v['h']=2;v['i']=3;
	v['j']=1;v['k']=2;v['l']=3;v['m']=1;v['n']=2;v['o']=3;v['p']=1;v['q']=2;v['r']=3;
	v['s']=4;v['t']=1;v['u']=2;v['v']=3;v['w']=1;v['x']=2;v['y']=3;v['z']=4;v[' ']=1;

	cin >> t;
	ch=getchar();

	for(i=1;i<=t;i++)
	{
		gets(msg);

		j=0;cnt=0;
		while(msg[j]!='\0')
		{
			it=v.find(msg[j]);
			cnt+=it->second;

			j++;
		}

		cout << "Case #" << i << ": " << cnt <<endl;
	}
	return 0;
}