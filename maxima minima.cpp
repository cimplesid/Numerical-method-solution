  #include<stdio.h>
  #include<conio.h>
            #include<math.h>
main()
{
               int n, i, j, k;
              float x[100],fx[100],fd[100],a,b,c,d,e,value,s1,s2,x1,x2,h;
               printf("enter n:");
               scanf("%d",&n);
               printf("enter data x and f(x):");
               for ( i = 0; i < n; i++)
               {
               	scanf("%f %f",&x[i],&fx[i]);
               }
               h=fabs(x[1]-x[0]);
               printf("enter h=%f:",h);
               for ( i = 0; i<n; i++)
               {
               	fd[i]=fx[i];
               }
               for ( i = 0; i < n-1; i++)
               {
               	for ( j= n-1; j < i+1; j--)
               {
               	fd[j]=fd[j]-fd[j-1];
               	
               }
               }
               a=0.5*fd[3];
               b=fd[2]-fd[3];
               c=fd[1]-0.5*fd[2]+0.3333*fd[3];
                
                d=b*b-4*a*c;
              
                e=2*a;
                 if(d>0){
                 	s1=(-b+sqrt(d))/e;
                s2=(-b-sqrt(d))/e;
				 }
				
              
                x1=x[0]+s1*h;
                x2=x[0]+s2*h;
              
                value=(fd[2]+((6*s1-6)*fd[3])/6)/h*h;
               
                if (value<0)
                {
                	printf("maxima=%f",x2);
                }
                else{
                	printf("minima=%f",x2);



                               }
                               value=0;
                                value=(fd[2]+((6*s2-6)*fd[3])/6)/h*h;
                                 if (value<0)
                {
                	printf("maxima=%f",x1);
                }
                else{
                	printf("minima=%f",x1);



                               }
                           }
