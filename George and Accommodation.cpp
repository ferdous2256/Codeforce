#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,m,c =0;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d %d",&n,&m);
        if(n<m-1)
            c++;
    }
    cout<<c<<endl;
}
