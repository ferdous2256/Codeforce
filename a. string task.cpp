#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n,a;
    cin>>n;
    int m,j=0;
    m=n.length();
    for(int i=0; i<m; i++)
    {

        if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'||n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U'||n[i]=='y'||n[i]=='Y')
        {
            continue;
        }

        else
        {
            a+=tolower(n[i]);

        }

    }
    m=a.length();
    for(int i=0;i<m;i++)
    {
        cout<<'.'<<a[i];
    }


}
