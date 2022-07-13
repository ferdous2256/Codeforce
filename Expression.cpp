#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d %d %d",&a,&b,&c);
    d = a+b*c;
    e = a*(b+c);
    f = a*b*c;
    g = (a+b)*c;
    h = a+b+c;
    cout<< max(max(max(d,e),h),max(f,g))<<endl;
    return 0;
}
