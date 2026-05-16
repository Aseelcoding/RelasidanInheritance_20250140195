#include "ibu.h"

ibu::ibu(string pNama)
    : nama(pNama)
{
    cout << "Ibu \"" << nama << "\" ada\n";
}

ibu::~ibu()
{
    cout << "Ibu \"" << nama << "\" tidak ada\n";
}

void ibu::tambahAnak(anak* pAnak)
{
    daftar_anak.push_back(pAnak);
}

void ibu::cetakAnak()
{
    cout << "Daftar Anak dari Ibu \""
        << nama
        << "\" :\n";

    for (int i = 0;
        i < daftar_anak.size();
        i++)
    {
        cout << daftar_anak[i]->nama
            << endl;
    }

    cout << endl;
}