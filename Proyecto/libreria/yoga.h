#ifndef YOGA_H
#define YOGA_H

#endif // YOGA_H

#include "encabezados.h"
#include "cliente.h"

enum horaYog { primerHorario = 9, segundoHorario = 10, tercerHorario = 11, cuartoHorario = 15, quintoHorario =  16, sextoHorario = 19};
typedef enum horaYog eHoraYog;

struct Yoga {
    u_int cupoMax;
    u_int cupoActual;
    sCliente* clientes;
}; typedef struct Yoga sYoga;

bool hayEspacio(sYoga* claseYoga);
// ABM
void reservarTurnoYoga(sYoga* claseYoga, sCliente cliente);
void bajaCliente(sYoga* claseYoga, sCliente cliente);
void modificarCliente(sYoga* clseYoga, sCliente anterior, sCliente nuevo);
