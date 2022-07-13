#include<iostream>
#include<string>
using namespace std;
int main()
{
    string c;
    cin>>c;
    int i = 0;
    if(c[i] >= 'a' && c[i] <= 'z')
    {
        //cout<< "in";
        c[i] -= 32;
    }

    cout<<c<<endl;
    return 0;
}
