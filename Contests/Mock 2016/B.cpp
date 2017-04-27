#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<stdio.h>
#include<stdlib.h>
#include<sstream>
#define max_number 10000
using namespace std;

int main()
{
    int n,a,b,cs=1;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int need=0;
        int total=-1;

        cin>>n;

        for(int i=0; i<n-1; i++)
        {
            cin>>a>>b;
            need+=(a-b);
            if(need>=total)
                total=need;

        }
        printf("Case %d: %d\n",cs++,total);


    }
    return 0;
}


