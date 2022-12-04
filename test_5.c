#include <stdio.h> 

void main()
{
    int i, p=0,c=0,j;
    
    for (i=1;i<50;i++)
    {
        for (j=2;j<i; j++)
            if (i%j==0)
                c++;
        
        if (c<2)
                p++;
    }
    printf("Plithos = %d\n",p);
}
