#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a[4];
    int c = 0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
//    cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
    for(int i = 0; i<3;i++)
    {
        if(a[i] == a[i+1])
            c++;

    }
    cout<<c<<endl;
}
