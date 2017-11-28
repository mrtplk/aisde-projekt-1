#include <stdio.h>
#include "Graf.hpp"

struct Graf *stworzGraf(int V, int E)
{
    struct Graf* graf=(struct Graf*) malloc(sizeof(struct Graf));
    graf->V=V;
    graf->E=E;
    graf->krawedz=(struct Krawedz*) malloc(graf->E*sizeof(struct Krawedz));
    return graf;
}

