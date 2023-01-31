#include <stdio.h>

void main()
{
    int x;
    int y; 
    int temp; 
    int vathmos[5];//Το μέγεθος ενός πίνακα είναι πάντα σταθερό.
    
     for (x=0;x<=5-1;x++)//To for αυτό υλοποιεί το διάβασμα του πίνακα
     {
         printf("Δωσε τον %dο βαθμο: ",x+1);
         scanf("%d",&vathmos[x]);
         }
         //Tα 2 for υλοποιoύν την ταξινόμηση φυσαλίδας
         for (y=1;y<=5-1;y++) //Το k είναι ο μετρητής των περασμάτων του πίνακα.
         for (x=0;x<5-y;x++) //Το for δίνει τις συγκρίσεις Ν-k που γίνονται σε κάθε πέρασμα.
         if (vathmos[x]>vathmos[x+1]) //Στο if αυτό γίνεται η εναλλαγή των στοιχείων.
         {
         temp=vathmos[x];
         vathmos[x]=vathmos[x+1];
         vathmos[x+1]=temp;
     }
     for (x=0;x<=5-1;x++)//To for αυτό υλοποιεί την εκτύπωση του πίνακα
     printf("%d, ",vathmos[x]);
