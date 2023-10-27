#include "spinning.h"

bool hayEspacio(sSpinning* claseSpinning) {
    return (claseSpinning->cupoActual < claseSpinning->cupoMax);
}

void reservarTurnoSpinning(sSpinning* claseSpinning, sCliente cliente) {
    claseSpinning->clientes[claseSpinning->cupoActual] = cliente;
    claseSpinning->cupoActual++;
}
