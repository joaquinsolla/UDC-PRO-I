#include <stdio.h>

int main() {

    int n1, n2, n3;

    printf("Introduce tres números (separados por comas):\n");
    scanf("%d, %d, %d", &n1, &n2, &n3);

    printf("Primer número: %d\n", n1);
    printf("Segundo número: %d\n", n2);
    printf("Tercer número: %d\n", n3);


    if (n1<=n2 & n2<=n3){
        printf("%d<=%d<=%d", n1, n2, n3);
    }   else {
        if (n1<=n3 & n3<=n2){
            printf("%d<=%d<=%d", n1, n3, n2);
        } else {
            if (n2<=n1 & n1<=n3){
                printf("%d<=%d<=%d", n2, n1, n3);
            } else  {
                if (n2<=n3 & n3<=n1) {
                    printf("%d<=%d<=%d", n2, n3, n1);
                } else {
                    if (n3<=n1 & n1<=n2){
                        printf("%d<=%d<=%d", n3, n1, n2);
                    } else {
                        if (n3<=n2 & n2<=n1){
                            printf("%d<=%d<=%d", n3, n2, n1);
                        }
                    }
                }
            }
        }
    }

    return 0;
}