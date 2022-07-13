#include<bits/stdc++.h>
using namespace std;
char a[100500];
int n,c1 = 0,c2 = 0,i;
int main()
{
    scanf("%d",&n);
    for( i =0;i<n;i++)
    {
        cin>>a[i];
    }
    for( i =0;i<n;i++)
    {
        if(a[i] == 'A')
            c1++;
        else if(a[i] == 'D')
            c2++;

    }
    //cout<<a<<endl;
    //cout<<c1<< " "<<c2<<endl;
    if(c1 > c2)
        cout<< "Anton"<<endl;
    else if(c1< c2)
        cout<< "Danik"<<endl;
    else if(c1 == c2)
        cout<< "Friendship"<<endl;
}
