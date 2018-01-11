#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    double a,b,c,d,e,f,g,h,i,j,res,rm;
    cin>>n;
    //res=(((((a*567)/9)+7492)*235)/47)-498;
    a=n*567;
    b=a/9;
    c=b+7492;
    d=c*235;
    e=d/47;
    f=e-498;
    rm=(int)f%10;
    cout<<rm;
    return 0;
}
