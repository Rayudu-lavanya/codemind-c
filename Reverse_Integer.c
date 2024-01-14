#include<stdio.h>
int main()
{
    int n,reverse_num=0,rem;
    scanf("%d",&n);
    int i;
    while(n != 0)
    {
        rem = n % 10;
        reverse_num = reverse_num*10+rem;
        n = n/10;
    }
    printf("%d",reverse_num);
    return 0;
}