//#include "stdafx.h"
#include "Lacze.hpp"


//int Lacze::identyfikator = 0;


Lacze::Lacze()
{
    //identyfikator++;
}

Lacze::~Lacze()
{
    //identyfikator--;
}

istream& operator >> (istream &s, Lacze &l)
{
    s >> l.identyfikator >> l.poczatek >> l.koniec;
    return s;
}

