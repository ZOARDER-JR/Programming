#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<list>
#include<queue>
#include<algorithm>
#include<iomanip>

using namespace std;

void BFS(int s);

list<int> adj[101];
list<int>::iterator it;

int c[101],N,d[101];
double sum,total_v;

int main()
{
    int a,b,i,j,t;
    t=N=0;
    while(cin >> a >> b)
    {
        if(a == 0 && b == 0)
        {
            break;
        }
        for(i=0;i<=100;i++)
         {
             adj[i].clear();
         }
         sum=total_v=0;
        t++;
         adj[a].push_back(b);
         N=max(max(N,a),b);

         while(cin >> a >> b)
         {
             if(a == 0 && b == 0)
             {
                 break;
             }

             adj[a].push_back(b);
             N=max(max(N,a),b);
         }

         //total_v = N*(N-1);

         for(i=1;i<=N;i++)
         {
             BFS(i);
         }

         printf("Case %d: average length between pages = %.3lf clicks\n",t,(sum/total_v));
    }
    return 0;
}

void BFS(int s)
{
    queue<int> Q;
    int u;
    memset(c,0,sizeof(c));
    memset(d,0,sizeof(d));

    c[s] = 1;
    Q.push(s);

    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();

        for(it = adj[u].begin();it!= adj[u].end();it++)
        {
           if(c[*it] == 0)
           {
                Q.push(*it);
                c[*it]=1;
                d[*it]=d[u]+1;
                total_v++;
           }
        }
        c[u]=2;
    }

    for(int i=1;i<=N;i++)
    {
        sum+=d[i];
    }
}
