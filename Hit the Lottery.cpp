#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,m = 0,c = 0;
    cin>>n;
    if(n>=100)
    {
        m += n/100;
        n = n%100;

    }
    if(n>=20)
    {
        m += n/20;
        n = n%20;

    }
    if(n>=10)
    {
        m += n/10;
        n = n%10;

    }
    if(n>=5)
    {
        m += n/5;
        n = n%5;

    }
    m += n;
    cout<<m<<endl;
}
