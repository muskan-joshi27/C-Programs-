// Swap of two numbers using third varaible
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter values of a and b : ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a = %d\n",a);
    printf("b = %d",b);
    return 0;
}