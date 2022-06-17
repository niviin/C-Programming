#include<stdio.h>
int main()
{
    int a , b, sum, difference, product, remainder;
    printf("Enter two Numbers to sum:");
    scanf("%d %d", &a,&b);
    sum = a + b;
    difference = a - b;
    product = a*b;
    remainder = a%b ;
    printf("%d\n",sum);
    printf("%d\n",difference);
    printf("%d\n",product);
    printf("%d",remainder);
    return 0;
}
