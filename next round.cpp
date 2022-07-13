#include<iostream>
using namespace std;
int main()
{
    int n,k,m,g=0, a[100];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m = a[k-1];
    for(int i=0;i<n;i++)
    {
        if(a[i]>= m && a[i] > 0)
            g++;
    }

    cout<<g<<endl;

}
