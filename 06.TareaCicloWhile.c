//Creado por: Edi Alejandro López Cornejo
//Creado el 09/10/2020
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,lim,con;
    printf("Ingresa un numero en el rango de 0 a 5: ");
    scanf("%d",&num);
    lim=(7*num)+2;
    con=num*3;
    while (con <= lim)
    {
        if (num <=5){
       printf("%d ",con);
       con=con+2;
        }
        else{
            printf("Recuerda que es un numero del 0 al 5");
            return 0;
        }
    }
}




