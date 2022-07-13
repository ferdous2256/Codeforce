#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "that",b = "it";
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        if(i%2 == 0)
        {
            if(i == n)
            cout<< "I love it";
            else cout<< "I love that ";
        }
        else
        if(i == n)
            cout<< "I hate it";
            else cout<< "I hate that ";

    }
    cout<<endl;

}
