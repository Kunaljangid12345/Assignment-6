#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a = ");
    scanf("%d",&a);

     int b;
    printf("Enter the value of b = ");
    scanf("%d",&b);

    int temp = a; // temporary
    a = b;
    printf("value of a = %d\n",a);
    b = temp;
    printf("value of b = %d",b);
    return 0;

}