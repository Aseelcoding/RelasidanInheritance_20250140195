#include <iostream>

#include "jantung.h"
#include "manusia.h"

using namespace std;

int main() {

    manusia* varManusia =
        new manusia("Markus");

    delete varManusia;

    return 0;
}