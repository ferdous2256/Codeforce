#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,appertment,number,compare;
    int answer;
    cin>>t;
    for(int i = 0;i<t;i++)
    {
        cin>>appertment>>number;
        if(appertment == 1 || appertment == 2)
            printf("%d\n",1);
        else
        {
            appertment -=2.0;
            compare = appertment/number;
            answer = compare;
            if(answer == compare)
            cout<<answer+1<<endl;
            else cout<<answer+2<<endl;
        }

    }
}
