#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int n,m,a,c,d;
    cin>>n>>m>>a;

    if(n%a!=0)
    {
        c=n/a;
        c++;
    }
    else{
        c=n/a;
    }
    if(m%a!=0)
    {
        d=m/a;
        d++;
    }
    else{
        d=m/a;
    }
    cout<<c*d<<endl;
}
