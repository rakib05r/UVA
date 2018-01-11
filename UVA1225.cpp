#include<stdio.h>
int main()
{
    int i,j,k,n,m,a,b,c,d,e,f,g,h,p,q,l,r;
    scanf("%d",&m);
    for(k=1; k<=m; k++)
    {
        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        g=0;
        h=0;
        p=0;
        q=0;
        scanf("%d",&n);//3
        for(i=1; i<=n; i++)//
        {
            r=i;
            for(j=0 ; ; j++)
            {
                l=r%10;
                if(l==0)
                    a++;
                else if(l==1)
                    b++;
                else if(l==2)
                    c++;
                else if(l==3)
                    d++;
                else if(l==4)
                    e++;
                else if(l==5)
                    f++;
                else if(l==6)
                    g++;
                else if(l==7)
                    h++;
                else if(l==8)
                    p++;
                else if(l==9)
                    q++;

                r=r/10;
                if(r==0)
                    break;
            }

        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,p,q);
    }
return 0;
}
