#include<bits/stdc++.h>
using namespace std;
int n,ara[1000],araa[1000];
int main()
{
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
        scanf("%d",&ara[i]);
    for(int i =0;i<n;i++)
    {
        araa[ara[i]-1] = i+1;
    }
    for(int i =0;i<n;i++)
        cout<<araa[i]<<" ";
    cout<<endl;
}
