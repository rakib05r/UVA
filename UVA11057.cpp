#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bn,i,j,m,a[100];
    cin>>bn;
    for(i=0;i<bn;i++){
        cin>>a[i];
    }
    cin>>m;
    sort(a+0,a+(bn-1));
    for(i=0;i<bn;i++){
        //for(j=i+1;j<bn;j++){
          //  if(a[i]+a[j]==m){
                cout<<a[i]/*<<" "<<a[j]*/<<endl;
            }
        //}
    //}
    return 0;
}
