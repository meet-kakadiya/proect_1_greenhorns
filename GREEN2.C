#include<stdio.h>
#include<conio.h>
void main ()
{
float hra,da,ta,base;
float gross;
clrscr();
printf("Enter the value is base salary");
scanf("%f",&base);
hra=base*0.10;
da=base*0.05;
ta=base*0.08;
gross=base+hra+da+ta;
printf(" ans value is %f",gross);
  getch();

}