#include<bits/stdc++.h>
using namespace std;
bool arr[1500];
int main()
{
    int t,n,p;
    cin>>t;
    while(t--)
    {
        int c = 1;
        cin>>n>>p;
        for(int i = 0;i<=n;i++)
            arr[i] = true;
        arr[0] = false;
        for(int i =1;i<=p;i++)
        {
            if(p%i==0)
            {
                c++;
                arr[i] = false;
            }
        }
        c = abs(c-n);
        cout<<c<<endl;
        for(int i = 0;i<=n;i++)
            if(arr[i] == true)
            cout<<i<< " ";
        cout<<endl;
    }
}
