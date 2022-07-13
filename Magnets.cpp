#include<bits/stdc++.h>
using namespace std;
int n,ara[100050],c = 1;
int main()
{
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
        scanf("%d",&ara[i]);
    for(int i = 0;i<n-1;i++)
    {
        if(ara[i] != ara[i+1])
        {
            c++;

        }
    }
    cout<<c<<endl;
}
