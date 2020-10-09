//Creador; Edi Alejandro López Cornejo
//Este programa calcula la resistencia para cada led
//Creado el 27/09/2020
#include <stdio.h>

int main (void)
{
    float Vs, I, R; //Voltaje de la fuente y corriente

    printf("De los siguientes valores elige el voltaje y corriente para que muestre el valor de la resistencia\n");
    printf("\t\t      LED              V          I\n");
    printf("\t\tRojo std              1.5       0.015\n");
    printf("\t\tVerde std             1.8       0.015\n");
    printf("\t\tAmarillo std          1.8       0.015\n");
    printf("\t\tBlanco                2.8       0.02\n");
    printf("\t\tAmarillo brillante     2        0.02\n");
    printf("\t\tVerde brillante        3        0.02\n");
    printf("\t\tAzul brillante         3        0.02\n");
    printf("\t\tRojo brillante         2        0.02\n\n");

    printf("Escribe el valor del voltaje V: ");
    scanf("%f", &Vs);
    printf("Escribe el valor de la corriente I: ");
    scanf("%f", &I);

    R=Vs*I;

    printf("El valor de la resistencia para el LED es: %.4f Ohms\n",R);
    system ("PAUSE");

    return 0;
}

