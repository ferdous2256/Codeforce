#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b[105],answer = 0;
    cin>>a;
    for(int i =0;i<a;i++)
        cin>>b[i];
    for(int i = 0;i < a; i++)
    answer += b[i];
    answer = answer/a;
    printf("%.12lf",answer);
    return 0;
}
