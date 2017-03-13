#include <stdio.h>
#include<math.h>
int c,a,n,s;
void main()
{
    scanf("%d",&a);
    for(c=1;c<=a;c++)
    {
        s=a%c;
    
        if(s==0)
            {
                n++;
            }
    }
    
    printf("Number of Factors are=%d",n);
}

