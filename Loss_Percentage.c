#include<stdio.h>
int main()
{
    float CP,SP,p,per;
    scanf("%f%f",&CP,&SP);
    p = CP-SP;
    per = (p*100)/CP;
    printf("%.2f",per);
    return 0;
}