#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a+b<=c || b+c<=a || c+a<=b){
            cout<<"Wrong!!"<<endl;
        }
        else{
            cout<<"Ok"<<endl;
        }
    }
    return 0;
}
