#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b , S1 , S2, S3 ,S4;
    printf("entrer la valeur de a et b : ");
    scanf("%f%f",&a,&b);

    S1= a + b;
    printf("la somme est :%.2f \n" ,S1);
    S2= a - b;
    printf("la soustraction est :%.2f \n ",S2);
    S3= a * b;
    printf("la multiplication est :%.2f \n ",S3);
    S4= a / b;
    if (b==0){
        printf("errer");
    }else
        printf("la resultat est %.2f" , S4 );

    return 0;
}
