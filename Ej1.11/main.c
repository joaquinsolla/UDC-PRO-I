#include <stdio.h>

int main() {

    int tiempo, segs, mins, horas;

    printf("Introduce un tiempo en segundos:\n");
    scanf("%d", &tiempo);

    if (tiempo<60)  {                                                                                         //segundos
        segs = tiempo;
        printf("%d segundos son: %ds \n", tiempo, segs);}

       if (60<=tiempo & tiempo<3600) {                                                              //minutos + segundos
        mins = tiempo / 60;
        segs = tiempo%60;
        printf("%d segundos son: %dm : %ds", tiempo, mins, segs);}

            if (3600<=tiempo) {                                                             //horas + minutos + segundos
             horas = tiempo/3600;
             mins = (tiempo%3600)/60;
             segs = (tiempo%3600)%60;

             printf("%d segundos son: %dh : %dm : %ds", tiempo, horas, mins, segs);}
    return 0;
}