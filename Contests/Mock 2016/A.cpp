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
    int a;
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&a);
        if(a>=0)
        {
            for( int i=0; i<=a; i++)
            {
                if(i==a)
                    printf("%d\n",i);
                else
                    printf("%d ",i);
            }
        }
        else if(a<0)
        {

            for( int j=a; j<=0; j++)
            {
                if(j==0)
                    printf("%d\n",j);
                else
                    printf("%d ",j);
            }

        }
    }
    return 0;
}

