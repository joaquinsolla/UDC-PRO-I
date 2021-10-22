#include <stdio.h>

int main() {

    float n1, n2, n3, d;

    printf("Introduce 3 números:\n1: ");
    scanf("%f", &n1);
    printf("2: ");
    scanf("%f", &n2);
    printf("3: ");
    scanf("%f", &n3);

    if (n1>n2 && n2>n3) {d = (n1/n3); printf("%.2f", d);}
    else if (n1>n3 && n3>n2) {d = (n1/n2); printf("%.2f", d);}
    else if (n2>n1 && n1>n3) {d = (n2/n3); printf("%.2f", d);}
    else if (n2>n3 && n3>n1) {d = (n2/n1); printf("%.2f", d);}
    else if (n3>n1 && n1>n2) {d = (n3/n2); printf("%.2f", d);}
    else if (n3>n2 && n2>n1) {d = (n3/n1); printf("%.2f", d);}






    return 0;
}