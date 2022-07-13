#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, arr[1000], i,j,c = 0,d;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);


        for(i = 0;i<n;i = i+j){
            for(j = i+1;arr[i] == arr[j];j++){
               c++;
            }
        }
        d = n;
        while(c > 0){
            c -=2;
            d = d - 2;

        }
        cout<<d<<endl;
        c = 0;
    }
}
