#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,b,i;
    cin>>a;
    while(a--)
    {
        cin>>b;
        if(b%2 != 0)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            for(i = 3;i<sqrt(b);i+=2)
            {
                if(b%i == 0)
                {
                    cout<< "YES"<<endl;
                    break;
                }

            }
            cout<< "NO"<<endl;

        }
    }
}
