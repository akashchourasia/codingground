#include<stdio.h>
#include<math.h>
int a,c,s,n;
void main()
{
    printf("enter your number=");
    scanf("%d",&a);
    n=0;
    for(c=1;c<=a;c++)
    {
        s=a%c;
        if(s==0)
        {
            n++;
        }
    }
        if(n==2)
        {
            printf("Prime Number");
        }
        else
        {
            printf("Not Prime");
        }   
}    