#include <stdio.h>
#include "gastos.h"

double lerGasto(struct Gastos *g) {
    scanf("%lf", &g -> valor);
    return g -> valor;
}

int continuar() {
    int stop;
    printf("Se deseja continuar digite 1, se deseja parar digite 0: ");
    scanf("%d", &stop);
    return stop;
}
