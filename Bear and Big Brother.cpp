#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i =0;
    scanf("%d %d",&n,&m);
    while(n<=m)
    {
        n *=3;
        m*=2;
        i++;
    }
    cout<<i<<endl;
}
