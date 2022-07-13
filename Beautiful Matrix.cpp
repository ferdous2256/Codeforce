#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a[5][5],i=0,j=0;
    int c,d;
    for(i=0; i<5 ; i++)
    {
        for(j =0 ; j<5 ; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<5 ; i++)
    {
        for(j =0 ; j<5 ; j++)
        {
            if(a[i][j] == 1)
            {
                c=abs(2-i);
                d=abs(2-j);
                c= c +d;
            }
        }
    }
    cout << c<<endl;

}
