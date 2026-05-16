#ifndef DOKTER_H
#define DOKTER_H

#include <iostream>
#include <vector>

using namespace std;

class pasien;

class dokter {

public:

    string nama;

    vector<pasien*> daftar_pasien;

    dokter(string pNama);

    ~dokter();

    void tambahPasien(pasien* pPasien);

    void cetakPasien();
};

#endif