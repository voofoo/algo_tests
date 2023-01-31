#include <stdio.h>

void main()
{
    int x;
    int y; 
    int temp; 
    int vathmos[5];
    
     for (x = 0; x <= 5-1; x++)
     {
         printf("Δωσε τον %dο βαθμο: ", x + 1);
         scanf("%d", &vathmos[x]);
         }
             for (y = 1; y <= 5-1; y++)
             for (x = 0; x < 5-y; x++)
             if (vathmos[x] > vathmos[x+1])
         {
         temp = vathmos[x];
         vathmos[x] = vathmos[x+1];
         vathmos[x+1] = temp;
     }
     for (x = 0; x <= 5-1; x++)
     printf("%d, ", vathmos[x]);
}
