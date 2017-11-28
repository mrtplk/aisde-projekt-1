#pragma once
#include <fstream>
using namespace std;

class Wezel
{
public:
    Wezel();
    ~Wezel();
protected:
    int x;
    int y;
    int identyfikator;
    friend istream& operator >> (istream &s, Wezel &w);
private:
    
};

