#include <stdio.h>

int main() {

    int preg, acert;
    float prop;

    printf("Inserte el número total de preguntas:\n");
    scanf("%d", &preg);
    printf("Inserte el número total de aciertos:\n");
    scanf("%d", &acert);

    prop = (float) acert/preg;
    printf("prop = %f\n", prop);

    if (prop<0.5)
        printf("Se encuentra fuera de nivel");


    else if ( (prop>=0.5) && (prop<0.75) )
        printf("Se ha obtenido el nivel regular");


    else if ( (prop>=0.75) && (prop<0.8999) )
        printf("Se ha obtenido el nivel medio");

    else
        printf("Se ha obtenido el nivel máximo");


    return 0;
}