#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n>>p;
    int arr[p];
    bool urr[n+1],b = true;

    for(int i = 0;i<p;i++)
        cin>>arr[i];
    cin>>q;
    int brr[q];
    for(int i =0;i<q;i++)
        cin>>brr[i];
    for(int i =0;i<n+1;i++)
        urr[i] = true;
    for(int i = 0;i<p;i++)
        {
                urr[arr[i]] = false;
        }
    for(int i =0;i<q;i++)
    {
                urr[brr[i]] = false;
    }
    for(int i = 1;i<n+1;i++)
    {
        if(urr[i] == true)
        {
            b = false;
            break;
        }

    }

    if(b == false)
        cout<< "Oh, my keyboard!"<<endl;
    else
        cout<< "I become the guy."<<endl;
}
