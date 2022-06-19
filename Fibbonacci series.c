#include<stdio.h>
#include<conio.h>
int main()
{
    int num, n1=0, n2=1, n3,i;
    printf("enter number:");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
    n3 = n1+n2;
    n1 = n2;
    n2=n3;
     printf("%d",n3);

    }
    return 0;
}
