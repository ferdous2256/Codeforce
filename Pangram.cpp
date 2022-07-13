#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[30],brr[30];
    for(int i = 0;i<26;i++)
    {
        arr[i] = 'a'+i;
        brr[i] = 'A'+i;
    }
    int n,c = 0;
    cin>>n;
    string a;
    cin>>a;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<26;j++)
        {
            if((a[i] == arr[j] || a[i] == brr[j])&&(arr[j] != '1'))
               {
                   arr[j] = brr[j] = '1';

               }
        }
    }
    for(int i = 0;i<26;i++)
    {
        if(arr[i] == '1')
            c++;
    }
    if(c == 26)
        cout<< "YES"<<endl;
    else
        cout<< "NO"<<endl;

}
