#include "pasien.h"
#include "dokter.h"

pasien::pasien(string pNama)
    : nama(pNama)
{
    cout << "Pasien \"" << nama << "\" ada\n";
}

pasien::~pasien()
{
    cout << "Pasien \"" << nama << "\" tidak ada\n";
}

void pasien::tambahDokter(dokter* pDokter)
{
    daftar_dokter.push_back(pDokter);
}

void pasien::cetakDokter()
{
    cout << "Daftar Dokter dari Pasien \""
        << nama
        << "\" :\n";

    for (int i = 0;
        i < daftar_dokter.size();
        i++)
    {
        cout << daftar_dokter[i]->nama
            << endl;
    }

    cout << endl;
}