#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input;
    int c,n,m;
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>input;
        c=input.size();
        n=c-2;
        if(c>10)
        {
            cout<<input.front();
            cout<<n;
            cout<<input.back();

        }
        else
        {
            cout<<input;
        }
        cout<<endl;
    }

    return 0;

}
