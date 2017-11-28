#pragma once
using namespace std;
#include <iostream>
class Sciezka
{
public:
    Sciezka();
    ~Sciezka();
    
protected:
    friend istream& operator >> (istream &s, Sciezka &x);
private:
    
};




