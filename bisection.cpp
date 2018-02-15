#include<stdio.h>
#include<conio.h>
#include<math.h>
float f (float x)
{
    return (x*x + 4*x - 3);
}
 main ()
{
   
    float a, b,c,d;
    printf("\nEnter the intervl (a,b):\n");
    scanf("%f%f",&a,&b);
     printf("\nEnter the error value E\n");
    scanf("%f",&d);    
    do
    {
    	c=(a+b)/2;
        if (f(a)*f(c) < 0)
            b=c;
        else
            a=c;  
    }
    while (fabs(a-b>d||f(c)==0));
    printf("root is %f",c);
    getch();
}
