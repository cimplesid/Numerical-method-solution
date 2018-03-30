  #include<stdio.h>
  #include<conio.h>
            #include<math.h>
main()
{
               int n, i, j, k;
               float sumx, sumxsq, sumy, sumxy, x, y;
               float sumx3, sumx4, sumxsqy, a[20][20], u=0.0, b[20];
               printf("\n Enter the n value:");
               scanf("%d", &n);
               sumx = 0;
               sumxsq = 0;
               sumy = 0;
               sumxy = 0;
               sumx3 = 0;
               sumx4 = 0;
               sumxsqy = 0;
               printf("\n Enter the value of x and y:\n");
               for(i=0;  i<n; i++)
               {
                        scanf("%f %f", &x, &y);
                        sumx +=x;
                        sumxsq += pow(x,2);
                        sumx3 += pow(x,3);
                        sumx4 += pow(x,4);
                        sumy +=y;
                        sumxy += x * y;
                        sumxsqy += pow(x,2) *y;
               }
               a[0][0] = n;
               a[0][1] = sumx;
               a[0][2] = sumxsq;
               a[0][3] = sumy;
               a[1][0] = sumx;
               a[1][1] = sumxsq;
               a[1][2] = sumx3;
               a[1][3] = sumxy;
               a[2][0] = sumxsq;
               a[2][1] = sumx3;
               a[2][2] = sumx4;
               a[2][3] = sumxsqy;
//for(i=0;  i<3; i++)
//{ 
//  for(j=0;  j<=3; j++)
//               printf("%10.2f",a[i][j]);
//               printf("\n");
//            }
          for(k=0;  k<=2; k++)
          {
               for(i=0;i<=2;i++)
               {
                        if(i!=k)
                           u=a[i][k]/a[k][k];
                        for(j = k; j<=3; j++)
                                    {
									a[i][j]=a[i][j]-u*a[k][j];}
                }
        }

     for(i=0;i<3;i++)
     {
            b[i] = a[i][3]/a[i][i];
            printf("\nx[%d] = %f", i, b[i]);
     }
  printf("\n");
 printf("y= %f x2 + %fx +%f",b[2],b[1],b[0]);
}

