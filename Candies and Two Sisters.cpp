#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    ll m;
    scanf("%d",&t);
    while(t--)
    {
        cin>>m;
        if(m%2 == 0)
        {
          m = m/2;
          m--;
        }
        else
        {
            m = m/2;
        }
        cout<<m<<endl;
    }
    return 0;
}
