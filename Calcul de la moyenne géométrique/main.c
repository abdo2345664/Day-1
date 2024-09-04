#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,m;
    printf("entrer la valeur de a b et c : \n ");
    scanf ("%f%f%f",&a,&b,&c);
    m = (a * b * c)^(1/3);
    printf("la moyenne géométrique de trois nombres est : %d " , m );
    return 0;
}
