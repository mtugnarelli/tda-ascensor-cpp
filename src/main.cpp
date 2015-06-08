
#include <string>
#include <iostream>
#include "Ascensor.h"

using namespace std;

int main() {

    cout << ".:: Ascensor ::." << endl;

    Ascensor ascensorPrincipal(10);
    Ascensor ascensorDeServicio(12);

    cout << "El Ascensor principal se mueve entre PB y el piso " <<
            ascensorPrincipal.obtenerUltimoPiso() << endl;

    cout << "El Ascensor de servicio se mueve entre PB y el piso " <<
            ascensorDeServicio.obtenerUltimoPiso() << endl;


    return 0;
}
