#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d=0,e;
    cin>>a;
    e = 0;
    for(int i =1; i<=a;i++)
    {
        cin>>b>>c;
        d += c;
        d = d - b;
        //cout<<d<<endl;

        if(d > e)
            e = d;

    }
    cout<<e<<endl;
    return 0;
}
