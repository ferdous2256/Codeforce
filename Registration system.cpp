#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    string a;
    cin>>n;
    map<string,int> arr;
    for(long long int i =0;i<n;i++)
    {
        cin>>a;
        if(arr[a] == 0)
        {
            cout<< "OK"<<endl;

        }
        else
            cout<<a<<arr[a]<<endl;
        arr[a]++;
    }
}
