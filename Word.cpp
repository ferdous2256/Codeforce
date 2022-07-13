#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int m,c1 = 0,c2 = 0;
    getline(cin,s);
    m = s.length();
    //cout<<m<<endl;
    for(int i = 0;i<m;i++)
    {
        if(s[i]>='a' && s[i]<= 'z')
            c2++;
        else if(s[i]>='A' && s[i]<= 'Z')
            c1++;
    }
    //cout<<c1<< " "<<c2<<endl;
    if(c1<= c2)
    {
        for(int i = 0;i<m;i++)
        {
            if(s[i]>='A' && s[i]<= 'Z')
            {
                s[i] += (97-65);
            }
        }
    }
    else
    {
        for(int i = 0;i<m;i++)
        {
            if(s[i]>='a' && s[i]<= 'z')
            {
                s[i] -= (97-65);
            }
        }
    }
    cout<<s<<endl;
}
