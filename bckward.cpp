#include<stdio.h>
#include<conio.h>
#include<math.h>
main() {
int i,n,j,fact=1;
float x[20],y[20][20],h,d=1,p,a,f;

printf("Enter The Value of n:");
scanf("%d",&n);
printf("\nEnter the elements of x,y:");
for(i=1;i<=n;i++)

{

scanf("%f", &x[i]);


scanf("%f",&y[i][1]);}
h=x[2]-x[1];
printf("Enter x for which y is to be calculated:");
scanf("%f",&f);
p = (f-x[n])/h;
a=y[n][1];
for(j=2;j<=n;j++) {
 for(i=n;i>=1;i--)
  y[i][j]= y[i][j-1] - y[i-1][j-1];
}
//printf("The Table is :\n\n");
//for(i=1;i<=n;i++)
//    {
// printf("\t%.2f",x[i]);
// for(j=1;j<=(n-i)+1;j++)
//     printf("\t%.2f",y[i][j]);
// printf("\n");
//    }
for(j=2;j<=n;j++) {
for(i=1;i<j;i++)
fact=fact*i;

d = d*(p+(j-2));
a = a + (y[n][j]*d)/fact;
fact=1;
}
printf("\n\nFor x=%f The Value of y is %f",f,a);
getch();
}
