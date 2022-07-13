#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c0,c1,h;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        int i,x = 0,v = 0,sum,sum1,a = 0;
        scanf("%d %d %d %d",&n,&c0,&c1,&h);
        cin>>s;
        for(i = 0;i<n;i++)
        {
            if(s[i] == '0')
                v++;
            if(s[i]=='1')
                x++;
        }
        sum = (v*c0)+(x*c1);
        if(c0<c1)
        {
            while(x--)
            {
                v++;
                a+=h;
                sum1=(v*c0)+(x*c1)+a;
                if(sum1<sum)
                    sum = sum1;
                else break;

            }
        }
        if(c0>c1)
        {
            while(v--)
            {
                x++;
                a+=h;
                sum1=(v*c0)+(x*c1)+a;
                if(sum1<sum)
                    sum = sum1;
                else break;

            }
        }
        cout<<sum<<endl;


    }
}
