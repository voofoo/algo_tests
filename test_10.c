#include <stdio.h>
void main()
{
	float a[7],sum,mo;
 	int i;
 	
 	printf("Dose 7 aritumous: \n");
	
	for (i=0;i<7;i++)
 	scanf("%f",&a[i]);
	    for (i=0;i<7;i++)
 	    sum=sum+a[i];
 	    mo=sum/7;
 	printf("Ο μεσος όρος είναι %f\n",mo);
 	printf("To sum είναι %f\n",sum);
 	
}
