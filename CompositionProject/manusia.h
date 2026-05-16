#ifndef MANUSIA_H
#define MANUSIA_H

#include <iostream>
#include <string>

#include "jantung.h"

using namespace std;

class manusia {

public:
   
    string nama;

    jantung varJantung;
    manusia(string pNama)
        : nama(pNama)
    {
        cout << nama
            << " hidup\n";
    }
   

    ~manusia();
};

#endif