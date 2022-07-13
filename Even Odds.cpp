#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b,c,k,n,answer;
    cin>>k>>n;
    if(k%2 == 0)
    {
        b = k/2;
        if(b>=n)
        {
            answer = n+n-1;
        }
        else
        {
            c = k - n;
            answer = n - c;
        }

    }
    else
    {
        b = k/2;
        b += 1;
        if(b>=n)
        {
            answer = n+n-1;
        }
        else
        {
            c = k - n+1;
            answer = n - c;
        }
    }

    cout<<answer;
    return 0;
}
