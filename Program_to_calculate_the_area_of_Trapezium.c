#include<stdio.h>
int main()
{
    float a,b,h,area;
    scanf("%f%f%f",&a,&b,&h);
    area = 0.5*h*(a+b);
    printf("%.4f",area);
    return 0;
}
