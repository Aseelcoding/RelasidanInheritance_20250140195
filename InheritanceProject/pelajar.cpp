#include "pelajar.h"

pelajar::pelajar(string pNama,
    string pSekolah)

    : orang(pNama),
    sekolah(pSekolah)
{
    cout << "pelajar dibuat\n";
}

pelajar::~pelajar()
{
    cout << "pelajar dihapus\n";
}

string pelajar::perkenalan()
{
    return "Hallo, nama saya "
        + nama +
        " dari sekolah "
        + sekolah;
}
