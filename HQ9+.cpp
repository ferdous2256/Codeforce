#include<bits/stdc++.h>
using namespace std;
int main()
{
    char p[105];
    scanf("%s",p);
    int j = 0;
    for(int i = 0; p[i] != '\0'; i++)
    {
        if(p[i] == 'H')
        {
            j++;
            cout<< "YES"<<endl;
            break;
        }
        else if(p[i] == 'Q')
        {
            j++;
            cout<< "YES"<<endl;
            break;

        }
        else if(p[i] == '9')
        {
            j++;
            cout<< "YES"<<endl;
            break;

        }
        /*else if(p[i] == '+')
        {
            j++;
            cout<< "YES"<<endl;
            break;

        }*/
    }
    if(j == 0)
        cout<< "NO"<<endl;
}
