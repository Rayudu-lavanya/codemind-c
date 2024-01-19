#include<stdio.h>
int main()
{
    float sal,HRA,DA,PF,Gross_sal;
    scanf("%f%f%f",&sal,&HRA,&DA);
    PF = (0.12*sal);
    Gross_sal = sal+HRA+DA+PF;
    printf("%.2f
%.2f",PF,Gross_sal);
    return 0;
}