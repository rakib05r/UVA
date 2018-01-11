#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],i,j,k,t,n,ck,m;
    while(scanf("%d",&n)!=EOF){
            ck=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                ck++;
            }
        }
    }
    cout<<"Minimum exchange operations : "<<ck<<endl;
    }
    return 0;
}
