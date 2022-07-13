#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,ans = 0;
    cin>>n>>m;
    long long int arr[m];
    for(long long int i = 0;i<m;i++)
    {
        cin>>arr[i];
    }
    for(long long int i = 0;i<m-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            ans += n;
        }

    }
    ans += arr[m-1]-1;
    cout<<ans<<endl;
}
