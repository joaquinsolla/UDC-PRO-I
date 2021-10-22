#include <stdio.h>

void proceso(int x){
    printf("Introduce un número entero: ");
    scanf("%d", &x);

    int i=x;
    do {i--;}   while ((x % i)!=0);
    printf("%d", i);
}


int main() {

int n;
proceso(n);

    return 0;
}