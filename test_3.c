#include <stdio.h> 
#include <stdlib.h>

void stars(int* p, int sizeP)
{
/* δήλωση μεταβλητών */
int i=0,j,error=0;//θέτοντας αρχικά στο error την τιμή 0 υποθέτουμε ότι όλα τα στοιχεία του πίνακα είναι έγκυρα.

/* έλεγχος τιμών των στοιχείων του πίνακα p */ for (i=0;i<sizeP;i++)
{

if (*(p+i) < 0 || *(p+i) > 20)//Ο συμβολισμός *(p+i) αναφέρεται στο στοιχείο p[i]

{
printf("element %d is out of limit\n",i+1); error=1;
break;
}

}

if (error==1)/*δεν γίνεται εκτύπωση άστρων */ printf("Den ginetai kamia ektyposi\n");

else /*εκτύπωση άστρων */
{
for (i=0;i<sizeP;i++)
{
for(j=1;j<=*(p+i);j++)//Η επανάληψη αυτή τυπώνει 1 αστεράκι κάθε φορά που εκτελείται και επαναλαμβάνεται τόσες φορές όσο είναι και ο αριθμός στη θέση i του πίνακα
printf("*");


//πίνακα
printf("\n");//αλλάζουμε γραμμή για το επόμενο στοιχείο του

}
}
}

void main()
{
int size,i,*x;

printf("dose megethos pinaka\n"); scanf("%d",&size);
x=(int*)malloc(size*sizeof(int)); for (i=0;i<size;i++)
{
printf("dose %d stoixeio\n",i+1);
scanf("%d",(x+i));//Επειδή το x+i είναι διεύθυνση δεν χρειάζεται να χρησιμοποιήσουμε το σύμβολο &
}

stars(x,size);
}

--------------------------------------------------------

ERGASIA 4

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
