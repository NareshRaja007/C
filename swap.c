#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b;
 printf("Enter a : ");
 scanf("%d",&a);
 printf("Enter b : ");
 scanf("%d",&b);
 printf("Before Swapping a is %d b is %d",a,b);
 a = a+b;
 b = a-b;
 a = a-b;
 printf("After Swapping a is %d b is %d",a,b);
 
 return 0;
 }