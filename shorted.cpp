#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    while(1)
    {
        int n,i,j,c=0,d=0, e =0,f = 0,a;

        cin>> n;
        for(i =0; i< n; i++)
        {
            cin>>a;
            if(a == 4)
                f++;
            else if(a == 3)
                e++;
            else if(a == 2)
                d++;
            else if(a == 1)
                c++;

        }
        if(d != 0)
        {
            if(d%2 != 0 && d>c && c>e)
            {
                d = (d/2)+1;
                d = d -((c/2)+1);
            }
            else if(d%2 != 0 && d<=c && c>e)
            {
                d = (d/2)+1;
                c = ((c/2)+1) -d;
            }
            else if(d%2 ==0)
                d = d/2;
            else
                d = (d/2)+1;
        }
        //cout<<c<<" "<<d<< " "<<e<< " "<<f<<endl;
        if(c>=e && e != 0)
        {
            c = c-e;

        }
        else if(e> c)
        {
            e = e - c;
        }
        if(c%4 == 0)
        {
            c = c/4;
        }
        else
        {
            c = (c/4)+1;
        }
        f = f + e + d + c;
        cout<<f<<endl;
        100000
2 1 1 2 1 1 1 2 2 1 2 1 2 2 1 2 2 1 1 1 1 1 2 1 1 1 1 1 2 2 1 2 1 2 1 1 1 1 1 2 2 2 1 1 1 2 2 1 1 1 1 1 1 1 1 1 2 1 2 2 1 2 1 2 2 2 1 1 1 1 1 2 2 1 1 1 2 2 2 1 2 1 1 2 1 1 2 1 1 1 2 1 1 2 1 1 1 2 1 2 1 1 1 2 2 1 1 1 2 2 1 2 2 1 1 1 1 1 2 2 2 1 2 1 1 1 2 1 2 1 2 1 1 2 1 1 1 1 1 2 1 1 2 2 1 1 2 2 1 2 1 1 1 2 1 1 2 2 1 1 1 2 1 2 2 1 2 2 1 1 1 1 2 2 2 2 1 2 2 2 1 1 1 2 1 1 1 1 1 1 2 1 2 2 2 1 2 1 2 1 2 2 1 1 1 1 2 2 2 1 1 1 2 1 2 1 1 1 1 2 2 1 2 1 2 1 1 1 1 1 1 1 1 1 1 1 1 1 2 1 1 1 1 1 2 2 2 2 1 2 1 1...


    }
}
