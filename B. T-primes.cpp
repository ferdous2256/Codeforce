#include<bits/stdc++.h>
using namespace std;

long long int arr[1000001];
long long int m = 1000001;
long long int n,x,answer;

int sieve()
{
    long long int i = 0,j = 0;
    arr[0]=arr[1]= 1;
    for(i = 2; i*i <=m; i++)
    {
        if(arr[i]==0)
        {
            for(j = i*i; j<=m; j=j+i)
                arr[j] = 1;
        }
    }

}
int main()
{
    sieve();
    /*for(long long int i = 2;i<m;i++)
        if(arr[i]==0)
        cout<<i<< " ";*/
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>x;
        answer = sqrt(x);
        if(answer*answer == x && arr[answer] == 0)
            cout<< "YES"<<endl;
        else cout<< "NO"<<endl;

    }
}
