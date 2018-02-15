#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x){
  return x*x*x*x-4*x+3;
}

float df(float x){
  return 4*x*x*x-4;
}

int main(){
 float a,b,e;
  int n;
  printf("Enter the initial guess error and no of iteration:\n");
  scanf("%f%f%d",&a,&e,&n);
  int i=1; 
  do{
   a=b;
      b=a-f(a)/df(a);
      i++;    
  }while(fabs(a-b)>=e&&i<=n);
  printf("\nOne of the roots of the given equation is:%f",b);
  
}
