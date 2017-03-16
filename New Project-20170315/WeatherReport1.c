#include<stdio.h>

void main()
{
    int t;
    printf("Enter the Temperature=");
    scanf("%d",&t);
    if(t<=0)
    {
        printf("Very Cool");
        
    }
    if(t<=10)
    {
        if(t>0)
        {
            printf("cool");
        }
    }
    if(t<=20)
    {
        if(t>10)
        {
            printf("Cool Out");
        }
    }
    if(t<=30)
    {
        if(t>20)
        {
            printf("Warm");
            
        }
    }
    if(t>30)
    {
        printf("Hot");
    }
}