#include "dokter.h"
#include "pasien.h"

dokter::dokter(string pNama)
    : nama(pNama)
{
    cout << "Dokter \"" << nama << "\" ada\n";
}

dokter::~dokter()
{
    cout << "Dokter \"" << nama << "\" tidak ada\n";
}

void dokter::tambahPasien(pasien* pPasien)
{
    daftar_pasien.push_back(pPasien);

    pPasien->tambahDokter(this);
}

void dokter::cetakPasien()
{
    cout << "Daftar Pasien dari Dokter \""
        << nama
        << "\" :\n";

    for (int i = 0;
        i < daftar_pasien.size();
        i++)
    {
        cout << daftar_pasien[i]->nama
            << endl;
    }

    cout << endl;
}