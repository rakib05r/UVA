#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,c;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b>>c;
        if(a>b && c>a || a<b && a>c){
            cout<<"Case "<<i<<": "<<a<<endl;
        }
        else if(a<b && b<c || a>b && b>c){
            cout<<"Case "<<i<<": "<<b<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<c<<endl;
        }
    }
    return 0;
}
