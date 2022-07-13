#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c = 0;
    scanf("%d %d",&n,&m);

    for(int i = 1; i<n; i+=2)
    {
        for(int j = 0; j<m; j++)
            cout<<"#";
        cout<<endl;
        if(c%2 == 0)
        {
            for(int j = 1; j<m; j++)
                cout<<".";
            cout<<"#"<<endl;
        }

        else
        {
            cout<< "#";
            for(int j = 1; j<m; j++)
                cout<<".";
            cout<<endl;
        }
        c++;
    }
    for(int j = 0; j<m; j++)
    {
        cout<< "#";
    }
    cout<<endl;
    return 0;
}
