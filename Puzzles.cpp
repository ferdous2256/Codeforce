#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,mini;
    cin>>a>>b;
    vector<int> arr(b);

    for(int i =0;i<b;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    mini = INT_MAX;
    //cout<<mini<<endl;
    for(int i = 0;i<=b-a;i++)
    {
        mini = min(mini,abs(arr[i]-arr[i+a-1]));
    }

    cout<<mini<<endl;
}
