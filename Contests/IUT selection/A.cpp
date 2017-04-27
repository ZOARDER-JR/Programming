#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>

using namespace std;

int multiply(int a);

int main()
{
    int s,rslt;

    while(cin >> s )
    {
        if(s==0)
        {
            break;
        }

        cout << s << " ";

        if(s/10!=0)
        {
            do
            {
                rslt=multiply(s);

                cout << rslt << " ";

                s=rslt;
            }while(rslt/10 !=0 );
        }

        cout <<endl;
    }
    return 0;
}

int multiply(int a)
{
    int x=1;

    if(a/10==0)
    {
        return x*(a%10);
    }
    else
    {
        return (x*(a%10)*multiply(a/10));
    }
}
