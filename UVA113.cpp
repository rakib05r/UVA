#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,p;
    while(scanf("%lf%lf",&n,&p)!=EOF){
        double k;
        k=pow(p,1.0/n);
        printf("%d\n",(int)k);
    }
    return 0;
}
