#include <stdio.h>

#define NUM 20
#define NCAR 60

enum testudos {prim, sec, univ};
enum tempregado {oficina, condutor, tecnico};
struct tdata{
    int dia;
    int mes;
    int ano;
};

union tdato {
    char telefono[9];
    char matricula[7];
    char barras[16];
};

struct ttrab{
    char nome[NCAR];
    struct tdata data;
    enum testudos estudos;
    enum tempregado empregado;
    union tdato dato;
};

typedef struct ttrab ttaller[NUM];

int main() {
    ttaller  taller;
    return 0;
}