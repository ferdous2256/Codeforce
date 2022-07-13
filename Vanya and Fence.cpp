#include<bits/stdc++.h>
using namespace std;
int n, h, a, sum = 0;
int main() {
    scanf("%d %d",&n,&h);
    for (int i = 0; i < n; i++) {
        scanf("%d",&a);
        if (a > h) {
            sum++;
        }
        sum++;
    }
 printf("%d\n",sum);
}
