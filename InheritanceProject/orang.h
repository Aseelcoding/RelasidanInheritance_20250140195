#ifndef ORANG_H
#define ORANG_H

#include <iostream>
#include <string>

using namespace std;

class orang {

public:

    string nama;

    orang(string pNama);

    ~orang();

    int jumlah(int a, int b);
};

#endif