#include<bits/stdc++.h>
using namespace std;
int ta[4];
int main()
{
    int n,i,j ,sum = 0;
    cin>>n;
    for(i = 1;i<=n;i++)
    {
        cin>> j;
        if(j == 4)ta[3]++;
        else if(j == 3)ta[2]++;
        else if(j == 2)ta[1]++;
        else if(j == 1)ta[0]++;
    }

        sum += ta[3];
        sum += ta[2];
        if(ta[0]<= ta[2])
            ta[0] = 0;
        else if(ta[0]>ta[2])
            ta[0] = ta[0]-ta[2];
        if(ta[1]%2 == 0)
            sum += (ta[1]/2);
        else if(ta[1]%2 != 0)
        {
            sum += (ta[1]/2)+1;
            if(ta[0] >= 2)
                ta[0] = ta[0]-2;
            else if(ta[0] < 2)
                ta[0] = 0;

        }
        if(ta[0] < 4 && ta[0] != 0)
            sum += 1;
        else if(ta[0] >= 4)
        {
            if(ta[0]%4 == 0)
                sum += (ta[0]/4);
            else if(ta[0]%4 != 4)
                sum += (ta[0]/4)+1;
        }
        cout<<sum<<endl;
}
