#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E 0.00001
#define g(x) 2-x*x
main()
{
	float a,b;
	printf("Enter initial guess:");
	scanf("%f",&a);
	b=g(a);
	start:
		if((b-a)/b<E)
		{
			printf("Root =%f",b);
			goto end;
		}
		else{
			a=b;
			goto start;
			
		}
		end:
			getch();
		}
