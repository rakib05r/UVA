#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)&&(n!=0))
    {
        int x,y=10000000;
        for(int i=1;i<=100;i++){
            for(int j=1;j<=i;j++){
                if(i*i*i-j*j*j==n && j<y){
                    x=i;
                    y=j;
                }
            }
        }
        if(y==10000000){
            printf("No solution\n");
        }
        else{
            printf("%d %d\n",x,y);
        }
    }
    return 0;
}
