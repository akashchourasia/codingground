#include <stdio.h>
#include<math.h>

int main()
{
    int c,n,s;
    s=0;
    scanf("%d",&n);
    
    for(c=1;c<=n;c++)
    {
        s=s+c;
        printf("%d+",c);
    }
    printf("\b=%d+",s);

    return 0;
}
