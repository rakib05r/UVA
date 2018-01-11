#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,dif;
    while(scanf("%d%d",&a,&b)!=EOF){
            if(a==-1 && b==-1){
                return 0;
            }
        dif=abs(a-b);
        if(dif>50){
            dif=100-dif;
        }
        cout<<dif<<endl;
    }
    return 0;
}
