#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;
    if(n>5)
    {
        m = n/5;
        n = n%5;
    }
    if(n <= 5 && n >= 1)
        m++;
    cout<<m<<endl;

}
