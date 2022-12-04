#include <stdio.h> 

void main()
{
    int i, c=0,x,sum=0;
    
    for (i=0;i<5;i++)
        {
            scanf("%d",&x);
            
            if (x%3==0)
            continue;
            
            if (x%5==0)
            break;
            
            sum+=x; c++;
        }
    
    printf("Average = %.2f\n",(float)sum/c);
}
