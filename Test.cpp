#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<climits>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<list>
#include<algorithm>
#include<utility>
#include<functional>

using namespace std;

int main(void) {

		char str;
		string::iterator it;

		FILE *f,*input;

		f=fopen("output.txt","w");
		input=fopen("input.txt","r");
		do
		{
			str=fgetc(input);

			if(str >= 'a' && str <= 'z')
			{
				fprintf(f,"%c",toupper(str));
				//cout << *it;
			}
		}while(str!=EOF);
		//cout <<endl;

		fclose(f);
	return 0;
}
