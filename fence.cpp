#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,d;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        c = c-a;
        d = sqrt((c*c)+(b*b));
        cout<<d<<endl;
    }
}
