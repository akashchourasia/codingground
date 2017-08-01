#include <stdio.h>
#include<math.h>


int main()
{
    char x,C,T,R;
    printf("Enter Value of x =");
    scanf("%c",&x);
    float r,l,w,h,b,a,pi;
    pi=3.14;
    
    switch(x)
    {

        case'C': //C=Circle
        printf("Enter Radius r=");
        scanf("%f",&r);
        a=pi*r*r;
        printf("%f",a);
        break;

        case 'R': //R=Rectangle
        printf("Enter Value of l=");
        scanf("%f",&l);
        printf("Enter Value of w=");
        scanf("%f",&w);
        a=l*w;
        printf("%f",a);
        break;

        case 'T': //T=Triangle
        printf("Enter Value of b=");
        scanf("%f",&b);
        printf("Enter Value of h=");
        scanf("%f",&h);
        a=0.5*b*h;
        printf("%f",a);
        break;
    }



}
