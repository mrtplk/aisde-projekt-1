#pragma once
#include <fstream>
#include "Lacze.hpp"
#include "Sciezka.hpp"
#include "Wezel.hpp"
using namespace std;

class Siec
{
public:
    Siec();
    ~Siec();

    Lacze* Kruskal(int* ileLacz); // Zwraca najmniejsze drzewo
    Sciezka Dijkstra(int poczatek, int koniec); // Zwraca najkrotsza sciezke
    Sciezka* Floyd(int* paryWezlow, int ilePar, int* ileSciezek); // Zwraca zbior sciezek dla podanyh par wezlow

protected:
    Wezel *wezly;
    Lacze *lacza;
    Sciezka sciezka;
    friend istream& operator >> (istream &s, Siec &x);
private:
};

