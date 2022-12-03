#include <stdio.h>
main()
{
    int i, j=10;
    for (i=0; i<=20; ++i)
        if (i%3==1)
        {
            printf ("%d ", i);
            j--;
        }
    printf ("\nj=%d\n", j);
}
