#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,w,h,n,answer;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&w,&h,&n);
        if(w%2 == 0 && h%2 == 0)
        {
            answer = h * w;
        }
        else if( w % 2 == 0 && h % 2 != 0)
        {
            w = w/2;
            answer = w+1;
        }
        else if( w % 2 != 0 && h % 2 == 0)
        {
            h = h/2;
            answer = h+1;
        }
        cout<<answer<<endl;

    }

}
