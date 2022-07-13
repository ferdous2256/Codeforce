#include<bits/stdc++.h>
using namespace std;
long long int n,a,b,c = 0,i,j;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);

        if(b > a)
            c = b - a;
        else
        {
            c = a%b;
            if(c != 0)
            c = abs(c-b);
        }
        cout<<c<<endl;
        c = 0;
    }
    return 0;
}
