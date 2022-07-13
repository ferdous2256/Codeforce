#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int i,d;
    cin>>a>>b;
    c = b;
    d = a.length();
    //cout<<d<<endl;
    for(i=0;i<d;i++)
    {
        //cout<<"in"<<endl;
        if(a[i] == b[i])
            c[i] = '0';
        else c[i] = '1';
    }
    cout<< c <<endl;
}
