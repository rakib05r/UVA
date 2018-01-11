#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,t,i;
    cin>>t;
    for(i=1;i<=t;i++){
    cin>>a>>b>>c;
    d=b+c;
    if(d>a){
        d=d-a;
    }
    cout<<"Case "<<i<<": "<<d<<endl;
    }
    return 0;
}
