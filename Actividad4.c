#include <stdio.h>

#define FFLUSH while(getchar()!='\n')

void CapturarEnteros()
{
    int enteros[5];
    int suma=0;
    for (size_t x=0;x < sizeof(enteros)/sizeof(enteros[0]);x++) //no me funcionaba simplemente poner el sizeof, he investigando encontre que el sizeof regresa el tamaño en bites, por lo que es necesario dividirlo para obtener el tamaño en bites de numeros
    {
        printf("\nIntroduce el número %ld: ",x+1);
        scanf("%d",&enteros[x]);
    }
    printf("\nLos números introducidos son: ");
    for (size_t x=0; x < sizeof(enteros)/sizeof(enteros[0]); x++)
    {
        printf("\n%d",enteros[x]);
    }
    for (size_t x=0; x < sizeof(enteros)/sizeof(enteros[0]); x++)
    {
        suma=suma+enteros[x];
    }
    printf("\nLa suma de los 5 números capturados es: %d",suma);
    printf("\nEl Promedio es: %.2f",suma/5.0);
    printf("\n");
}

void mostrar(int n, char cadena[])
{
    for (size_t x = 0; x < n; x++)
    {
        printf("\n%s", cadena);
    }
}

int main ()
{
    char opcion;
    char cadena[20];
    int n;
    do
    {
        printf("\n¿Qué deseas hacer?:\n");
        printf("1) Capturar 5 números enteros\n");        
        printf("2) Mostrar cadena n veces\n");    
        printf("3) Agregar personaje\n");
        printf("4) Mostrar personaje\n");           
        printf("5) Salir del programa\n");
        printf("Opción: ");
        scanf("\n%c",&opcion);  

        switch (opcion)
        {
            case '1':
                CapturarEnteros();
                break;
            case '2':
                printf("\nEscribe una cadena de hasta 20 caracteres: ");
                FFLUSH;
                fgets(cadena, sizeof(cadena), stdin);
                printf("\n¿Cuantas veces quieres repetir la cadena?: ");
                scanf("\n%d", &n);
                mostrar(n,cadena);
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                printf("\nSaliendo del programa...");
                break;
            default:
                printf("\nOpción invalida.\n");
                break;
        }         

    }while(opcion!='5');
    printf("\n\n");
    return 0;
}