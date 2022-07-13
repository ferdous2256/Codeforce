#include<bits/stdc++.h>
using namespace std;

int c = 0,d = 0,a;
void bignum(int arr[],int m){

    for(int i = m;i>0;i--){
        swap(arr[i-1],arr[i]);
        c++;
    }
}

int main()
{
    int b=0,s=9999999, b1=0,s1=0;
    cin>>a;
    int arr[a];
    for(int i = 0;i<a;i++)
        cin>>arr[i];

    for(int i = 0; i<a; i++)
    {
        if(b < arr[i])
        {
            b = arr[i];
            b1=i;
        }
    }
    bignum(arr,b1);
        for(int i = 0; i<a; i++)
    {
        if(s>=arr[i])
        {
            s = arr[i];
            s1 = i;
        }
    }

    s1= a - (s1+1);
    c += s1;
    cout<<c<<endl;

}
