#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int n,t,j,i,k;
    scanf("%d %d",&n,&t);
    scanf("%s",&a);
    //cout<<a<<endl;
    while(t--)
    {
        for(int i =1;i<n;i++)
        {
            if(a[i]=='G' && a[i-1] == 'B')
            {swap(a[i],a[i-1]);
            i++;}

        }
    }
    cout<<a<<endl;

}
