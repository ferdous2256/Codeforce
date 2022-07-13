#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    reverse(a.begin(),a.end());
    //cout<<a<<" "<<b<<endl;
    if(a == b)
        cout<< "YES"<<endl;
    else cout<< "NO"<<endl;
}
