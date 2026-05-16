#include <iostream>

#include "dokter.h"
#include "pasien.h"

using namespace std;

int main() {

    dokter* varDokter1 =
        new dokter("dr.Budi");

    dokter* varDokter2 =
        new dokter("dr.Tono");

    pasien* varPasien1 =
        new pasien("Andi");

    pasien* varPasien2 =
        new pasien("Lia");

    varDokter1->tambahPasien(varPasien1);

    varDokter1->tambahPasien(varPasien2);

    varDokter2->tambahPasien(varPasien1);

    varDokter1->cetakPasien();

    varDokter2->cetakPasien();

    varPasien1->cetakDokter();

    varPasien2->cetakDokter();

    delete varPasien1;
    delete varPasien2;

    delete varDokter1;
    delete varDokter2;

    return 0;
}