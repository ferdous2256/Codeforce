#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i= 0,j=0,c=0,d,e;
    d = s.length();
    for(i=0; s[i] != '\0'; i++)
    {
        for(j = i+1; s[j] != '\0'; j++)
        {
            if(s[i] == s[j])
            {
                c++;
                break;
            }

        }
    }
    d = d -c;
    if(d% 2 == 0)
    {
        cout<< "CHAT WITH HER!";
    }
    else
    {
        cout<< "IGNORE HIM!";
    }
    return 0;

}
