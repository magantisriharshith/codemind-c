#include<stdio.h>
int mul(int a , int b)
{
    int c;
    c=a*b;
    return c;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=mul(a,b);
    printf("%d",x);
}