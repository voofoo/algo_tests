#include <stdio.h> 
void main()
{
    int c=0,j;
    int i;
    
    for (i=1;i<=11;i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
            c++;
        }    
        j++;
    }
    printf("\nPlithos Artion= %d\n",c);
}
