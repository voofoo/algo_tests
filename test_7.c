#include <stdio.h>

void main()
{
	float piliko, dios, ditis;
	printf("Dose DIAIRERAIO KAI DIERETI: \n");
	scanf("%f  %f", &dios, &ditis);
	if (ditis == 0)
	{
		printf("DIERESI NOT POSSIBRO");
	} else
	{
	piliko = dios / ditis;
	printf("To apotelesma tis diairesis toy %f me to %f einai %.4f", dios, ditis, piliko);
	}
}
