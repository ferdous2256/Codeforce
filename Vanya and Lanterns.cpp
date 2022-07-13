#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    double arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int m = 0;
    double ans;
    ans = arr[0];
    for(int i = 1;i<n;i++)
    {
        ans = max(ans,(arr[i] - arr[i-1]));
    }
    double len = l - arr[n-1];
    if((ans/2.0) > arr[0] && (ans/2.0) >= len)
    printf("%.10lf\n",ans/2.0);
    else if(arr[0] >= len)
        printf("%.10lf\n",arr[0]);
    else
        printf("%.10lf\n",len);
    return 0;

}
