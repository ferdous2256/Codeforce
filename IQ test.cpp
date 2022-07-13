#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c =0,d = 0,store1,store2;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++)
        cin>>arr[i];
    for(int i =0; i< n;i++)
    {
        if(arr[i]%2 == 0)
        {
            c++;
            store1 = i+1;
        }
        else
        {
            d++;
            store2 =i+1;
        }
    }
    if(c ==1)
        cout<<store1<<endl;
    else
    {
        cout<<store2<<endl;
    }
}
