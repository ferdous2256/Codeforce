#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,i=0,c=0;
    cin>>n;
    cin>>s;
    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] == 'R' && s[i+1] == 'R')
        {
            c++;
        }
        if(s[i] == 'G' && s[i+1] == 'G')
        {
            c++;
        }
        if(s[i] == 'B' && s[i+1] == 'B')
        {
            c++;
        }
    }
    cout<<c<<endl;
}
