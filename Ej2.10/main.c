#include <stdio.h>

int main() {

    float ingresos, IRPF, reducido, apagar, reducciones;
    int hijos;
    printf("Introduzca su salario anual bruto (en euros):\n");
    scanf("%f", &ingresos);

    printf("Introduzca el número de hijos mayores de 18 años a su cargo:\n");
    scanf("%d", &hijos);

    reducciones = hijos;
    IRPF = ingresos*0.15;

    if (hijos<0) {
        printf("Error");
    }
    else {
        if (hijos > 5) {
            reducciones = 5;
        }

        reducido = reducciones * 0.1 * IRPF;
        apagar = IRPF - reducido;

        printf("IRPF (15%): %.2f€\n", IRPF);
        printf("Reducción debida a hijos a cargo: %.2f€\n", reducido);
        printf("Total anual a pagar: %.2f€\n", apagar);
    }
    return 0;
}