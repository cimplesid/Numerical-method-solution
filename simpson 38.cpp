#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    return(x*x-4*x+9);
}
 main()
{
    int i;
    float x0,xn,h,y[20],so,se,ans,x[20];
    printf("\n Enter values of x0,xn: ");
    scanf("%f%f",&x0,&xn);
   
    h=(xn-x0)/3;
    printf("\n Refined value of h :%f\n",h);
    printf("\n Y values: \n");
    for(i=0; i<=3; i++)
    {
        x[i]=x0+i*h;
        y[i]=f(x[i]);
        printf("\n %f\n",y[i]);
    }
    so=0;
    se=0;
    for(i=1; i<3; i++)
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
    ans=(h*3)/8*(y[0]+y[3]+3*so+3*se);
    printf("\n Final integration is %f",ans);
 
    getch();
}
