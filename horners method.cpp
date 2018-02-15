#include<stdio.h>
#include<conio.h>
#include<math.h>
#define p(x) 3*x*x*x-4*x*x+5*x-6
main()

{
	int a3=3,a2=-4,a1=5,a0=-6,x,b3,b2,b1,b0
	;
	printf("enter value of x:");
	scanf("%d",&x);
	b3=a3;
	b2=a2+b3*x;
	b1=a1+x*b2;
	b0=a0+x*b1;
	printf("p(2)=%d",b0);
	getch();
}
