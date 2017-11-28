#pragma once
#include <fstream>
using namespace std;
class Lacze
{
public:
    Lacze();
    ~Lacze();
    
protected:
    int poczatek;
    int koniec;
    int identyfikator;
    friend istream& operator >> (istream &s, Lacze &l);
private:
    
};


