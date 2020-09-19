#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <stdio.h>

struct personaje
{
    char nombre[20];
    char tipo[20];

    float fuerza;
    int salud;
} personajes[5];

unsigned int cont = 0;

void capturar_personaje()
{
    if (cont < 5)
    {
        printf("\nNombre: ");
        scanf("\n%s", personajes[cont].nombre);
        printf("\nTipo: ");
        scanf("\n%s", personajes[cont].tipo);
        printf("\nFuerza: ");
        scanf("\n%f", &personajes[cont].fuerza);
        printf("\nSalud: ");
        scanf("\n%i", &personajes[cont].salud);
        cont++;
    }
    else
    {
        printf("\nYa has registrado el maximo posible de personajes");
    }
}
void mostrar_personajes()
{
    for (size_t x = 0; x < cont; x++)
    {
        printf("\nPersonaje %ld", x + 1);
        printf("\nNombre: %s", personajes[x].nombre);
        printf("\nTipo: %s", personajes[x].tipo);
        printf("\nFuerza: %.2f", personajes[x].fuerza);
        printf("\nSalud: %i", personajes[x].salud);
        printf("\n");
    }
}
#endif