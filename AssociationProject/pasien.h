#ifndef PASIEN_H
#define PASIEN_H

#include <iostream>
#include <vector>

using namespace std;

class dokter;

class pasien {

public:

    string nama;

    vector<dokter*> daftar_dokter;

    pasien(string pNama);

    ~pasien();

    void tambahDokter(dokter* pDokter);

    void cetakDokter();
};

#endif