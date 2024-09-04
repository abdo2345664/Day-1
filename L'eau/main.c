#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c ;
    printf("enter la temperature de l'eau : ");
    scanf("%f",&c);
    if(c<0)
       printf("glace");
    else
        if(c>=0 && c<100)
       printf("liquide ");
    else
        if(c>= 100)
        printf("gaz ");

    return 0;
}
