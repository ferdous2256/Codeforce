#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,c =0;
    cin>>k>>l>>m>>n>>d;
    bool arr[d];
    for(int i = 0;i<d;i++)
        arr[i] = true;
    for(int i = k-1;i<d;i += k)
        arr[i] = false;
    for(int i = l-1;i<d;i += l)
        arr[i] = false;
    for(int i = m-1;i<d;i += m)
        arr[i] = false;
    for(int i = n-1;i<d;i += n)
        arr[i] = false;
    for(int i = 0;i<d;i++)
    {
        if(arr[i] == false)
            c++;
    }
    cout<<c<<endl;
}
