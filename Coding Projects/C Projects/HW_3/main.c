#include <stdio.h>
#include <stdlib.h>

int main()

{

float numb;
printf ("\n\n\n\t\t\t\tWelcome to the distance converter program (miles<->kms)");
printf ("\n\t\t\t***********************************************************************");
printf ("\n\n\t\t\tEnter how many conversions you would like to print ( up to 99):");

scanf ("\t\t\t%f", &numb);

while

    ( numb < 1 || numb > 99 )

    {   printf("\n\n\t\t\t\tNumber out of range (1 to 99 lines)! Try again :");
        scanf ("%f", &numb);}
    printf("\n\t\t\t\t===================================================");

int i, reverse = numb;
for (i = 1; i <= numb; i++)
{

float mi = i * 0.6214, km = reverse * 1.6;


    printf("\n\t\t\t\t| %4d miles = %-6.1f km 
    | %4d km = %6.2f miles | ",  reverse,( reverse * 1.6), i, mi   );
reverse--;}
    {printf("\n\t\t\t\t=================================================== ");
    printf("\n\n\t\t\t\tThank you for choosing our conversion program!");;
}



return 0;
}
