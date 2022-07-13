#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,c = 0,c1 =0,a,b;
    cin>>s>>n;
    c = s;
    vector<pair<int, int> >arr;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        arr.push_back(make_pair(a,b));
    }
    sort(arr.begin(), arr.end());
    for(int i = 0 ;i<n;i++)
    {
        if(c > arr[i].first)
        {
            c += arr[i].second;
            c1++;
        }
    }
    if(c1 == n)
        cout<<"YES"<<endl;
    else
        cout<< "NO"<<endl;

}
