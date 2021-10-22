#include <stdio.h>
#define HORA 24

void leer(float datos[HORA]){

    for(int i=0; i<HORA; i++){
        printf("Introduce la temperatura de las %d:00: ", i);
        scanf("%f", &datos[i]);
    }
}





int main() {

    int temp[HORA];

    leer(temp);

    return 0;
}