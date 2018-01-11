#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,sum,a,b;
    cin>>t;
    for(i=1;i<=t;i++){
            sum=0;
        cin>>a>>b;
        for(j=a;j<=b;j++){
            if(j%2!=0){
                sum=sum+j;
            }
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
