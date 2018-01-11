#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,b,c;
    while(scanf("%d%d",&n,&k)!=EOF){
        a=0;
        while(n>=k){
            b=n/k;
            c=n%k;
            n=b+c;
            a=a+b;
        }
        printf("%d\n",n+a);
    }
    return 0;
}
