#include <stdio.h>

int main() {
    float max, min, maxc, minc;
    char ciudad[50];

    printf("Introduce el nombre de tu ciudad: ");
    scanf("%s", ciudad);
    printf("Introduce la temperatura máxima en grados Fahrenheit: ");
    scanf("%f", &max);
    printf("Introduce la temperatura mínima en grados Fahrenheit: ");
    scanf("%f", &min);

    maxc = (max - 32)*(0.5556);
    minc = (min - 32)*(0.5556);

    printf("--------------------------------------------------%s 23/10/2019--------------------------------------------------\n", ciudad);
    printf("\t\tTMAX(ºF)\t\t\t\t\t\tTMin(ºF)\t\t\t\t\t\tTMax(ºC)\t\t\t\t\t\tTMin(ºC)\n");
    printf("\t\t%.2fºF\t\t\t\t\t\t\t%.2fºF\t\t\t\t\t\t\t%.2fºC\t\t\t\t\t\t\t%.2fºC\n",max , min, maxc, minc);
    printf("--------------------------------------------------------------------------------------------------------------------------\n");
    return 0;
}