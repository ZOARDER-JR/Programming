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
    double n,x;

    double ans;
    cin>>n;
    cin>>x;
    double m=x;
    double l=x;
    int cs=1;
    ans=m/l;
    printf("Case %d: %.2lf\n",cs,ans);
    for(int i=2; i<=n; i++)
    {
        cin>>x;
        if(x>=m)
            m=x;
        if(x<=l)
            l=x;
        ans=m/l;
        printf("Case %d: %.2lf\n",i,ans);


    }
    return 0;
}


