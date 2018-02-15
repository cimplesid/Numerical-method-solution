#include<stdio.h>
#include<conio.h>
#include<math.h>
#define p(x) x*x*x-7*x*x+15*x-9
main()

{
	int a3=1,a2=-7,a1=15,a0=-9,x,b2,b1,b0
	;
	printf("enter value of x:");
	scanf("%d",&x);
	b2=a3;
	b1=a2+x*b2;
	b0=a1+x*b1;
	printf("q(x)= %dx*x+%dx+%d",b2,b1,b0);
	getch();
}
