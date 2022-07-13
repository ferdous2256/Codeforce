#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,i,m = 0;
    scanf("%d%d%d",&k,&n,&w);
    for(i = 1;i<=w;i++)
    {
        m+=i*k;
    }
    if(n< m)
        printf("%d\n",m - n);
    else
        printf("0\n");
    return 0;
}
