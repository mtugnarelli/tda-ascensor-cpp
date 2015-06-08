
#include "Ascensor.h"
#include <string>

using namespace std;

Ascensor::Ascensor(unsigned int pisos) {

    if (pisos < 1) {

        throw string("No se puede inicializar el Ascensor con menos de un piso");
    }

    this->cantidadDePisos = pisos;
    this->piso = 0;
}

unsigned int Ascensor::obtenerUltimoPiso() {

    return this->cantidadDePisos;
}

unsigned int Ascensor::obtenerPisoActual() {

    return this->piso;
}

unsigned int Ascensor::llamarDesdePiso(unsigned int piso) {

    unsigned int desplazamiento;

    if (piso > this->obtenerUltimoPiso()) {

        throw string("Piso inexistente");
    }

    if (piso > this->obtenerPisoActual()) {

        desplazamiento = piso - this->obtenerPisoActual();

    } else {

        desplazamiento = this->obtenerPisoActual() - piso;
    }

    this->piso = piso;

    return desplazamiento;
}
