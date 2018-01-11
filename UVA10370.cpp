#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[1000],b,j,avg,avg1,t,ck,sum,n,k;
    int i;
    cin>>t;
    for(n=0;n<t;n++){
        sum=0;
        ck=0;
        cin>>k;
        for(i=0;i<k;i++){
            cin>>a[i];
        }
        for(i=0;i<k;i++){
            sum=sum+a[i];
        }
        avg=sum/k;
        for(i=0;i<k;i++){
            if(a[i]>avg){
                ck++;
            }
        }
        avg1=(ck*100)/k;
        printf("%.3f\n",avg1);
    }
    return 0;
}
