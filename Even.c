#include<stdio.h>
#include<conio.h>
void main()
{
int n ;
printf("numbers");
scanf("%d" ,&n);
if(n<0)
{
printf("Invalid");
}
else if (n%2==0)
{
printf("Even");
}
else
{
printf("Odd");
}
getch();
}
