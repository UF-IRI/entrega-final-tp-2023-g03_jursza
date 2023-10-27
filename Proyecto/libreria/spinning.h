#ifndef SPINNING_H
#define SPINNING_H


#endif // SPINNING_H

#include "encabezados.h"
#include "cliente.h"

enum horaSpi { primerHorario = 8, segundoHorario= 10, tercerHorario = 12, cuartoHorario = 16, quintoHorario = 18 };
typedef enum horaSpi eHoraSpi;

#define MAX_S 45
#define NOMBRE_S "Bicis"

struct Spinning {
    str nombreSala;
    u_int cupoMax;
    u_int cupoActual;
    sCliente* clientes;
    //enum horaSpi horario_sp;
}; typedef struct Spinning sSpinning;
