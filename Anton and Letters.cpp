#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b = "abcdefghijklmnopqrstuwxyz";

    getline(cin,a);
    int c =0,l;
    l = a.size();
    for(int i=0;i < l;i++)
    {
        if(a[i]>=97 && a[i] <= 122 &&b[a[i]] != '0')
        {
            c++;
            b[a[i]]='0';
        }
    }

    cout<<c<<endl;

}
