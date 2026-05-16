#ifndef IBU_H
#define IBU_H

#include <iostream>
#include <vector>

#include "anak.h"

using namespace std;

class ibu {

public:

    string nama;

    vector<anak*> daftar_anak;

    ibu(string pNama);

    ~ibu();

    void tambahAnak(anak* pAnak);

    void cetakAnak();
};

#endif