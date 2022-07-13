#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    int i,c=0,d=0;
    cin>>a>>b;
    for (i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        if(b[i] >= 'a' && b[i] <= 'z')
        {
            b[i] = b[i] - 32;
        }
    }
    if(a == b)
        cout<< "0";
    else if(a > b)
        cout<< "1";
    else
        cout<< "-1";
    return 0;

}
