#ifndef PELAJAR_H
#define PELAJAR_H

#include "orang.h"

class pelajar : public orang {

public:

    string sekolah;

    pelajar(string pNama,
        string pSekolah);

    ~pelajar();

    string perkenalan();
};

#endif