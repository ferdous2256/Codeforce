#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d,e,t,n;
    scanf("%d",&n);
    while(1)
    {
        n++;
        c++;
        a = n%10;
        t=n/10;
        b = t%10;
        t = t/10;
        d = t%10;
        t=t/10;
        if(a == b||a == d || a == t)
            continue;
        else if(b == d || b == t || d == t)continue;
        else break;

    }
    cout<<n<<endl;
}
