#include "anak.h"

anak::anak(string pNama)
    : nama(pNama)
{
    cout << "Anak \"" << nama << "\" ada\n";
}

anak::~anak()
{
    cout << "Anak \"" << nama << "\" tidak ada\n";
}