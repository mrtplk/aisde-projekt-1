#pragma once
using namespace std;
#include <iostream>
#include <vector>
class Sciezka
{
public:
    Sciezka();
    ~Sciezka();
    int* wezly; // Przez ktore wezly przechodzi sciezka
    int dlugosc; // Przez ile wezlow przechodzi sciezka
    
protected:
    friend istream& operator >> (istream &s, Sciezka &x);
private:
    
};




