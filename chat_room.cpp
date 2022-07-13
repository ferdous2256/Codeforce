#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    cin>> s;
    ss = "hello";
    int j=0,i;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] == ss[j])
            j++;
    }
    if(j == 5)
        cout<< "YES"<<endl;
    else cout<< "NO"<<endl;

}
