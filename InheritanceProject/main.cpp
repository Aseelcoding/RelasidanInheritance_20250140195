#include <iostream>

#include "pelajar.h"

using namespace std;

int main() {

    pelajar siswa1(
        "andi laksono",
        "SMAN 1 Bantul"
    );

    cout << siswa1.perkenalan()
        << endl;

    cout << "Hasil = "
        << siswa1.jumlah(10, 90)
        << endl;

    return 0;
}