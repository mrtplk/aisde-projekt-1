//#include "stdafx.h"
#include "Wezel.hpp"

//int Wezel::identyfikator = 0;

Wezel::Wezel()
{
    
}

Wezel::~Wezel()
{
    
}

istream& operator >> (istream &s, Wezel &w)
{
    s >> w.identyfikator >> w.x >> w.y;
    return s;
}

