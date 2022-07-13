#include<bits/stdc++.h>
using namespace std;
long long int ara[1000500];
long long int n,c = 1,mx = 1;
int main()
{
    scanf("%d",&n);
    for(long long int i =0;i<n;i++)
        scanf("%d",&ara[i]);
    for(long long int i =1;i<n;i++)
    {
        if(ara[i-1] <= ara[i])
            c++;
            mx = max(mx,c);
        if(ara[i-1] > ara[i])
            {
                c = 1;
            }
    }
    cout<<mx<<endl;
}
