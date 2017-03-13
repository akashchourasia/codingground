#include<stdio.h>
#include<math.h>
int a,c,s,x,y,n;
void main()
{
    scanf("%d",&n);
    y=0;
    for(a=1;a<=n;a++)
    {
        x=0;
        
        for(c=1;c<=a;c++)
        {
            s=a%c;
            if(s==0)
            {
                x++;
            }
        }

        if(x==2)
        {
            y++;
        }
    }
    printf("%d",y);
}    