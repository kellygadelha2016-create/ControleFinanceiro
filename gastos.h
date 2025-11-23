#ifndef GASTOS_H
#define GASTOS_H

struct Gastos {
    double valor;
};

double lerGasto(struct Gastos *g);
int continuar();

#endif