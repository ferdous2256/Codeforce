#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[300];
    int n,m;
    bool t = false;
    scanf("%s",&a);
    n = strlen(a);
    //cout<<n<<endl;
    for(int i =0; i<n; i++)
    {
        if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B')
        {
            if(t == true)
            {
                printf(" ");
                t = false;
            }
            i +=2;
            continue;
        }
        else
        {
            printf("%c",a[i]);
            t = true;
        }
    }
    printf("\n");
    return 0;
}
