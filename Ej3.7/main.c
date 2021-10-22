#include <stdio.h>
#include <stdbool.h>

bool anio_correcto (int a){
    if (a>=0) {return true;} else {return false;}
};

bool es_bisiesto (int b){
if ((b%4==0) && ((b%100!=0)||(b%400==0))) return true;
else return false;
};

bool mes_correcto (int m){
if (m>=1 && m<13) return true;
else return false;

};

bool dia_correcto (int d, int a){
if (es_bisiesto(a)) {
    if (d<30 && d>=1) return true;  else return false;

}   else {if (d<29 && d>=1) return true;    else return false; }

};


int main() {

    int dia, mes, anio;

    printf("Introduce una fecha (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &anio);

if (anio_correcto(anio)) {
    if (mes_correcto(mes)){
        if (dia_correcto(dia, anio)){
            printf("Fecha correcta\n");
        }   else printf("Día incorrecto\n");
    }   else printf("Mes incorrecto\n");
}   else printf("Año incorrecto\n");

    return 0;
}