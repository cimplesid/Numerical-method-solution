#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    return(x*x*x+2*x);
}
 main()
{
    int i;
    float x0,xn,h,y[20],so,se,ans,x[20];
    printf("\n Enter values of x0,xn:\n");
    scanf("%f%f",&x0,&xn);

   /* if(n%2==1)
    {
        n=n+1;
    }*/
    h=(xn-x0);
    //printf("\nrefined value of  h are:%d  %f\n",h);
    printf("\n Y values \n");
    for(i=0; i<=1; i++)
    {
        x[i]=x0+i*h;
        y[i]=f(x[i]);
        printf("\n%f\n",y[i]);
    }
    so=0;
    se=0;
    for(i=1; i<1; i++)
    {
        if(i%2==1)
        {
            so=so+y[i];
        }
        else
        {
            se=se+y[i];
        }
    }
    ans=h/2*(y[0]+y[1]+2*se);
    printf("\nfinal integration is %f",ans);
    getch();
}
