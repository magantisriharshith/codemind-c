#include<stdio.h>
float far(float a)
{
    float c;
    c=((a-32)*5/9);
    return c;
}
int main()
{
    float a;
    scanf("%f",&a);
    float m=far(a);
    printf("%0.2f",m);
}