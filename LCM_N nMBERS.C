#include <stdio.h>
int lcm(int a,int b)
{
    int d,k,l;
    k=a;l=b;
    while(b!=0)
    {
        d=a%b;
        a=b;
        b=d;
    }
    d=(k*l)/a;
    return d;

}
int main()
{
    int a,d,i,n;
    scanf("%d",&n);
    scanf("%d",&a);
    d=a;
    for(i=1;i<n;i++)
    {
        scanf("%d",&a);
        d=lcm(d,a);
    }
    printf("%d\n",d);
}
