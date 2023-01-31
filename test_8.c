#include <stdio.h>
void main()

{
        int secret, pin, tries;

        secret = 1234; /* Customer's secret PIN */
        tries = 0;
        do {
                printf("Δώστε το PIN σας: ");
                scanf("%d", &pin);
                tries = tries + 1;
        } while (pin != secret && tries < 4); /* Correct PIN entered or number tries exhausted */
}
