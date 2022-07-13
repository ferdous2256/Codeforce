#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int j=0,k=0,c=1,d=1;
    for(int i=0;a[i] != '\0'; i++ )
    {
        j = i;
        k =i;
        while(a[j] == '0' && a[j+1]== '0')
            {
                c++;
                j++;
            }
            while(a[k] == '1' && a[k+1]== '1')
            {
                d++;
                k++;
            }
        if(c < 7)
            c = 1;
        if(d < 7)
            d = 1;
        if (c >= 7)
        {
            cout<<"YES"<<endl;
            break;
        }
        if (d >= 7)
        {
            cout<<"YES"<<endl;
            break;
        }

    }
    if(c < 7 && d < 7)
    {
        cout<< "NO"<<endl;
    }
    return 0;
}
