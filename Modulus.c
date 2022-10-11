#include<stdio.h>
int mod(int a , int b)
{
    int c;
    c=a%b;
    return c;
}
int main ()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    x=mod(a,b);
    printf("%d",x);
}