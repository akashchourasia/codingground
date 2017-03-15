#include<stdio.h>

int a,b,c;

void main()
{
    printf("Enter Three Numbers");
    scanf("%d %d %d",a,b,c);
    if(a>=b)
    {
        if(c>=a)
        {
            printf("%d",c);
        }
        if(c<=a)
        {
            printf("%d",a);
            
        }
    }
    if(b>=a)
    {
        printf("%d",b);
    }
}