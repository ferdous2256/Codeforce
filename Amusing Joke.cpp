#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    int c1 = 0, c2 = 0;
    if((a.length()+b.length())== c.length())
        for(int i = 0; i<c.length(); i++)
        {
            for(int j = 0; j<a.length(); j++)
            {
                if(c[i] == a[j])
                {
                    a[j] = '1';
                    c[i] = '8';
                    c1++;

                }
            }
            for(int k = 0; k < b.length(); k++)
            {
                if(c[i] == b[k])
                {
                    b[k] = '1';
                    c[i] = '8';
                    c2++;
                }
            }
        }
    if((c1 == a.length()) && (c2 == b.length()))
        cout<< "YES"<<endl;
    else
        cout<< "NO"<<endl;
}
