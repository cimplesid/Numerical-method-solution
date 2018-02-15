#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
    return(x*x*x-4); // f(x)= x^3-4
}
main()
{
    float a,b,c,d,e;
    int count=0,n;
    printf("Enter the values of a and b:\n"); //(a,b) must contain the solution.
    scanf("%f%f",&a,&b);
    printf("Enter the values of error and max iterations:\n");
    scanf("%f %d",&e,&n);
    do
    {
        if(f(a)==f(b))
        {
            printf("\nSolution cannot be found \n");
        getch();
        }
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        printf("Iteration No:%d\tx=%f\n",count,c);
        count++;
        if(count==n)
        break;
    } while(fabs(f(c))>e);
    printf("\nsolution is %f\n",c);
 
}
