#include<bits/stdc++.h>
using namespace std;
int arr[10000];
int main()
{
    int n,sum =0,sum1 = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
        scanf("%d",&arr[i]);

    sort(arr,arr+n);
    for(int i = 0;i<n;i++)
           sum+=arr[i];
    sum = sum/2;
    int i = 0,j = n-1;
    while (sum1 <= sum)
    {
        sum1 += arr[j];
        i++;
        j--;
    }
    cout<<i<<endl;

}
