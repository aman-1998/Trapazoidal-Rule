#include<stdio.h>
float f(float x);
int main()
{
    float a,b,h,s,y0,yn;
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    h=(b-a)/n;
    y0=f(a);
    yn=f(a+n*h);
    s=y0+yn;
    for(i=1;i<=n-1;i++)
        s=s+2*f(a+i*h);
    s=(h/2)*s;
    printf("Answer = %f",s);
    return 0;
}
float f(float x)
{
    float y;
    y=1/(1+x*x);
    return y;
}
