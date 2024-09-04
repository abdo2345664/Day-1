#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c , k;

    printf("entrer la temperature : ");
    scanf ("%f",&c);
    k = c + 273.15;
    printf ("la temperature en K est : %.2f",k);



    return 0;
}
