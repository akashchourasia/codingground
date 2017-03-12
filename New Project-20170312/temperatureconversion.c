#include<stdio.h>
#include<math.h>
int C;
float F;

void main()
{
    printf("enter temperature in degree Celcius=");
    scanf("%d",&C);
    F= C*1.8 + 32;
    printf("temperature in degree fahreinheit=%f",F);
}