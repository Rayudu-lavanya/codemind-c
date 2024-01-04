#include<stdio.h>
#include<math.h>
int main()
{
    float p,q,res;
    scanf("%f%f",&p,&q);
    res = (sqrt(p*p+q*q));
    printf("%.2f",res);
}