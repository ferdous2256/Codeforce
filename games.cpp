#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c = 0;
    cin>>n;
    int arr[n],brr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i]>>brr[i];
    }
    for(int i =0; i<n;i++)
    {
        for(int j = 0;j<n;j++)
            if(arr[i] == brr[j])
                c++;
    }
    cout<<c<<endl;
    return 0;

}
