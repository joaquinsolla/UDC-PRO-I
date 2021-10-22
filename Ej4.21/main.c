#include <stdio.h>

#define ndia 20;
#define dano 365;

enum tsemana {luns, martes, mercores, xoves, venres, sabado, domingo};

struct tdata {
    unsigned int dia;
    unsigned int mes;
    unsigned int ano;
    };

struct thora {
    unsigned int hora;
    unsigned int minuto;
    unsigned int segundo;
    };

struct ttarefa {
    char tarefa[120];
    enum tsemana dsem;
    struct tdata data;
    struct thora hora;
};

typedef struct ttarefa ttarefasd[ndia];
typedef ttarefasd taxenda[dano];

int main() {

taxenda axenda;

    return 0;
}