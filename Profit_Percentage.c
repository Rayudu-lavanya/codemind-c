#include<stdio.h>
int main()
{
    float x,y,res;
    scanf("%f%f",&x,&y);
    res = ((y-x)/x)*100;
    printf("%.2f",res);
}