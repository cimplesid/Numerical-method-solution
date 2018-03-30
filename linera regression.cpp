#include<stdio.h>
            #include<math.h>
            main()
            {
                        int n,i;
                        float sumx, sumsq, sumy, sumxy, x, y, a0, a1, denom;
                        printf("enter the n value:");
                        scanf("%d",&n);
                        sumx=0;
                        sumsq=0;
                        sumy=0;
                        sumxy=0;
                        printf("enter value of  x and y:");
                        for(i=0;i<n;i++)
                        {
                                    scanf("%f %f",&x, &y);
                                    sumx +=x;
                                    sumsq += pow(x, 2);
                                    sumy +=y;
                                    sumxy +=x * y;
                        }
                        denom = n * sumsq - pow(sumx, 2);
                        a0 = (sumy * sumsq -sumx *sumxy)/denom;
                        a1 = (n * sumxy -sumx *sumy)/denom;
                        printf("y= %fx + %f",a1,a0);
                   }
