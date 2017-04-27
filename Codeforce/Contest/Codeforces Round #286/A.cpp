#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int check(string str)
{
	int val=1;


	for(int i=0,j=str.size()-1;i<=j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			val&=0;
		}
	}

	return val;

}

int main()
{
    string str,temp;
    string::iterator it;
    int i,j,k;
	bool flag;

    while(cin >> str)
    {
		flag = false;

        for(i=0;i<26;i++)
        {
            char ch=('a'+i);
            k=0;
            for(j=0;j<=str.size();j++)
            {
				temp = str;
                it=temp.insert(temp.begin()+j,ch);

      			k = check(temp);

                if(k==1)
                {
                    break;
                }
            }

            if(k==1)
            {
				flag = true;
                break;
            }
        }

		if (flag)
		{
			cout << temp << endl;
		}
		else
		{
			cout << "NA" << endl;
		}
    }
    return 0;
}
