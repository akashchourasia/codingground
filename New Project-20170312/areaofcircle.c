#include<stdio.h>
#include<math.h>
int r;
float A;

void main()
{
    printf("Enter the radius of circle : ");
    scanf("%d",&r);
    A=3.14*r*r;
    printf("Area of circle for radius r=%d is %f \n",r,A);
}