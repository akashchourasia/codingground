#include <stdio.h>
#include<math.h>

int main()
{
    int c,n,a,b,s;
    a=0,b=1;
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
        printf("%d",a);
        s=a+b;
        b=s;
    }

    return 0;
}