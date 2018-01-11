#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    while(scanf("%lld",&a)!=EOF){
             long long int arr[1000],i=0,ck=0,rm;
            if(a<0){
                return 0;
            }
            if(a==0){
                cout<<"0"<<endl;
                continue;
            }
    while(a>0){
        rm=a%3;
        arr[i]=rm;
        i++;
        ck++;
        a=a/3;
    }
    for(i=ck-1;i>=0;i--){
        cout<<arr[i];
    }
    cout<<endl;
}
    return 0;
}
