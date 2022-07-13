#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[105];
    bool cas = true;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] != 0)
            cas = false;
    }
    if(cas == false)
        printf("HARD\n");
    else
        printf("EASY\n");
}
