//Creador; Edi Alejandro López Cornejo
//Este programa calcula la corriente eléctrica y el voltaje en cada resistencia
//Creado el 27/09/2020
#include <stdio.h>

int main (void)
{
    float Vs, I1, I2, I3, It; //Voltaje de la fuente y corriente
    int R1, R2, R3; //Valores de las 3 resistencias

    printf("Escribe el valor de la fuente Vs: ");
    scanf("%f",&Vs);

    printf("Escribe los valores de las 3 resistencias separados por coma: ");
    scanf("%d, %d, %d", &R1, &R2, &R3);

    It=((Vs/R1)+(Vs/R2)+(Vs/R3));
    I1=(Vs/R1);
    I2=(Vs/R2);
    I3=(Vs/R3);
    printf("El voltaje que pasa por cada resistencia es: %.2fV\n",Vs);//El voltaje que pasa por las resistencias es el mismo que la fuente cuando sea circuito paralelo
    printf("La corriente I1 es: %.2fA\n",I1);
    printf("La corriente I2 es: %.2fA\n",I2);
    printf("La corriente I3 es: %.2fA\n",I3);
    printf("La corriente total It es: %.2fA\n",It);

    system ("PAUSE");
    return 0;

}

