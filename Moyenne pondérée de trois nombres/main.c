#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p2, p3 ,p4 , s ;
    printf("entrer la valeur de trois nombre  : ");
    scanf("%f%f%f",&p2, &p3 ,&p4);
    s = ((p2 * 2)+( p3 * 3) +( p4 * 5))/10;
    printf(" la moyenne pond�r�e de trois nombres donn�s est  : %0.2f " ,s);
    return 0;
}
