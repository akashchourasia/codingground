#include<stdio.h>

int a,b,c;

void main()
{
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b)
    {
        if(c>=a)
        {
            printf("%d",c);
        }
        if(c<a)
        {
            printf("%d",a);
            
        }
    }
    if(b>a)
    {
        if(c>=b)
        {
            printf("%d",c);
            
        }
        if(c<b)
        {
            printf("%d",b);
        }
    }
}