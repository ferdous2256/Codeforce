#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,m=0,b=0,a[3];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[j];
            if(a[j]==1)
            {
                m++;
            }

        }
        if(m>=2)
        {
            b++;
        }
        m=0;

    }
    cout<<b<<endl;
}
