#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    char b;
    cin>>a;
    int j=0,i=0;

    for(i = 0; a[i] != '\0';i++)
    {
        if(a[i] == '1')
        {
            b = a[j];
            a[j] = a[i];
            a[i] = b;
            j +=2;

        }
    }
    for(i = 0; a[i] != '\0';i++)
    {
        if(a[i] == '2')
        {
            b = a[j];
            a[j] = a[i];
            a[i] = b;
            j +=2;

        }
    }
    cout<< a;
    return 0;
}
