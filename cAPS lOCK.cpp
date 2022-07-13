#include<bits/stdc++.h>
using namespace std;
int main()
{
    char cap[105];
    int c = 0,d;
    scanf("%s",&cap);

    for(int i = 0; cap[i]!= '\0'; i++)
    {
        //cout<< "in"<<endl;
        if(cap[i]>= 'A' && cap[i] <= 'Z')
        {
            c++;

        }
    }
    d = strlen(cap);

    if(cap[0]>= 'A' && cap[0] <= 'Z')
    {
        if(c == d)
        {
            printf("%c",cap[0]);
            for(int i = 1; i<d; i++)
                printf("%c",cap[i]+32);
            printf("\n");
        }
        else
            printf("%s",cap);
    }
    else if(cap[0]>= 'a' && cap[0]<= 'z')
    {
        if(c == d-1)
        {
            printf("%c",cap[0]-32);
            for(int i = 1; i<d; i++)
                printf("%c",cap[i]+32);
            printf("\n");
        }
        else
            printf("%s",cap);
    }

    return 0;
}
