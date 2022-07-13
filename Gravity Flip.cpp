#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,arr[105];
    scanf("%d",&a);
    for(int i =0;i<a;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+a);
    for(int i = 0;i<a;i++)
        printf("%d ",arr[i]);
    cout<<endl;
    return 0;
}
