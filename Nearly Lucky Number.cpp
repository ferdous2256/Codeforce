#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    bool f = false;
    int i,j,k,c = 0;
    cin>>a;
    j = a.length();
    //cout<<j<<endl;
    for(i = 0; i<j; i++)
    {
        if(a[i] == '4'|| a[i] == '7')
            c++;
    }
    //cout<<c<<endl;
    if(c == 4 || c == 7)
            cout<< "YES"<<endl;
    else
        cout<< "NO"<<endl;
}
