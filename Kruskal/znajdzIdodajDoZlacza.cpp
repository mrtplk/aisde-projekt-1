#include <stdio.h>

int znajdz(int rodzic[], int i)
{
    if(rodzic[i]==-1)
        return i;
    return znajdz(rodzic, rodzic[i]);
}

void Zlacze(int rodzic[], int x, int y)
{
    int xset=znajdz(rodzic, x);
    int yset=znajdz(rodzic, y);
    rodzic[xset]=yset;
}

