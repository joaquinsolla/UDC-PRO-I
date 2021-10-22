#include <stdio.h>
#define HORA 24
#define DIA 7

void leer(float datos[DIA][HORA]){

    for(int i=0; i<DIA; i++){
        for(int j=0; j<HORA; j++){
            printf("Introduce la temperatura del día %d a las %d:00: ", i+1, j);
            scanf("%f", &datos[i][j]);

        }
    }
}

void media_d(float datos[DIA][HORA]){


    for (int (i) = 0; (i) < DIA; i++) {
        float media_diaria=0;
        for (int j = 0; j < HORA; j++) {
            media_diaria=media_diaria+datos[i][j];
        }
        media_diaria=media_diaria/HORA;
        printf("La temperatura media del día %d fue %.2f\n", i+1, media_diaria);
    }
}

void media_s(float datos[DIA][HORA]){
    float media_total=0;
    for(int i=0; i<DIA; i++){
        for(int j=0; j<HORA; j++){
            media_total=media_total+datos[i][j];
        }
    }
    media_total=media_total/(DIA*HORA);
    printf("La temperatura media semanal es: %.2f\n", media_total);
}

void media_h(float datos[DIA][HORA]){

    for(int i=0; i<HORA; i++){
        float media_hora=0;
        for(int j=0; j<DIA; j++){
            media_hora=media_hora+datos[i][j];
        }
        media_hora=media_hora/DIA;
        printf("La temperatura media de las %d:00 fue %.2f\n", i, media_hora);
    }
}




int main() {

    float temp[DIA][HORA];

    leer(temp);
    media_d(temp);
    media_s(temp);
    media_h(temp);

    return 0;
}