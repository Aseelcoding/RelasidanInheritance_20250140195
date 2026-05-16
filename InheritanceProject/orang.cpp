#include "orang.h"

orang::orang(string pNama)
    : nama(pNama)
{
    cout << "orang dibuat\n";
}

orang::~orang()
{
    cout << "orang dihapus\n";
}

int orang::jumlah(int a, int b)
{
    return a + b;
}