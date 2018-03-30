#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
	return x*x-3*x+2;
}
 main()
{
  float a,b,z1=-0.5773502,z2=0.5773502,x1,x2,value;
  printf("Enter a and b:");
  scanf("%f %f",&a,&b);
  x1=((b-a)/2)*z1+(b+a)/2;
   x2=((b-a)/2)*z2+(b+a)/2;
   value=((b-a)/2)*(f(x1)+f(x2));
   printf("\n Integration of given function =%f",value);
   getch();
}
