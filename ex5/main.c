#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  e,p;

    printf("enterer les annees d experience ");
    scanf("%d",&e);
    printf("enterer le nombre de projets ");
    scanf("%d",&p);
    if (e > 10){
      if( p>15){
        printf("le bonus est de 30% de son salaire ");
      }else

    if ( p<=10 && p >=15 ){
        printf("le bonus est de 20% de son salaire ");
    }else
    printf("pas de bonus ");
}else
    printf("pas de bonus ");
    return 0;
}
