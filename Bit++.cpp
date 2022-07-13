#include<iostream>
#include<string>
using namespace std;
int main()
{
    int m,n=0;
    string a;
    cin>>m;
    for(int i=0;i<m;i++)
        {
            cin>>a;
            if(a=="X++"||a=="++X")
            {
                n=n+1;
            }
            else if(a=="X--"||a=="--X")
            {
                n=n-1;
            }
        }

        cout<<n<<endl;
        return 0;

}

