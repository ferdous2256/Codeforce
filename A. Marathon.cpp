#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[4], c = 0;
    cin>>t;
    while(t--){
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        if(arr[0]<arr[1]){
            c++;
        }
        if(arr[0]<arr[2]){
            c++;
        }
        if(arr[0]<arr[3]){
            c++;
        }

        cout<< c<<endl;
        c = 0;
    }
}
