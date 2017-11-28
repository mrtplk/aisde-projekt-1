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
protected:
    Wezel *wezly;
    Lacze *lacza;
    Sciezka sciezka;
    friend istream& operator >> (istream &s, Siec &x);
private:
};

