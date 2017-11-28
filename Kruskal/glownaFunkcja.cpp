#include "glownaFunkcja.hpp"
#include "znajdzIdodajDoZlacza.cpp"
#include "Graf.hpp"
int czyKolko(Graf *graf)
{
    //Alkoacja pamieci na V pozdbiorow
    int *rodzic=(int*)malloc(graf->V *sizeof(int));
    //Wszystkie podzbiory sa pojedynczymi zbiorami
    memset(rodzic, -1, sizeof(int)*graf->V);
    //Idziemy przez wszystkie E grafu, znajdujemy pozdbiory każdego wierzchołka z każdego końca, jeśli obydwa podzbiory są takie same, jest koło w grafie.
    for(int i=0; i<graf->E; ++i)
    {
        int x=znajdz(rodzic, graf->krawedz[i].zrodlo);
        int y=znajdz(rodzic, graf->krawedz[i].cel);
    }
    if(x==y) return 1;
    
    Zlacze(rodzic, x, y);
    return 0;
    
    
}
