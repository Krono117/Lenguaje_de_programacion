#include <stdio.h>

int main ()
{
    char cal,cal2, cal3;
    float promedio;
    int num,num2,num3;

    printf("Escribe la primera calificacion en letra: ");
    scanf("%s", &cal);

    if (cal=='A' || cal=='a')
    {
        num=10;
    }
    else if (cal=='B' || cal=='b'){
        num=9;
    }
     else if (cal=='C' || cal=='c'){
        num=8;
    }
     else if (cal=='D' || cal=='d'){
        num=7;
    }
     else if (cal=='E' || cal=='e'){
        num=6;
    }
     else if (cal=='F' || cal=='f'){
        num=5;
    }
     else if (cal=='G' || cal=='g'){
        num=4;
    }
    else if (cal=='H' || cal=='h'){
        num=3;
    }
    else if (cal=='I' || cal=='i'){
        num=2;
    }
    else if (cal=='J' || cal=='j'){
        num=1;
    }
    else if (cal=='K' || cal=='k'){
        num=0;
    }
    else{
        printf("Ingresaste una calificacion que no esta dentro del rango\n");
        printf("Ingresa una calificacion valida entre A y K");
        exit (-1);
    }

    printf("Escribe la segunda calificacion en letra: ");
    scanf("%s", &cal2);

    if (cal2=='A' || cal2=='a')
    {
        num2=10;
    }
    else if (cal2=='B' || cal2=='b'){
        num2=9;
    }
     else if (cal2=='C' || cal2=='c'){
        num2=8;
    }
     else if (cal2=='D' || cal2=='d'){
        num2=7;
    }
     else if (cal2=='E' || cal2=='e'){
        num2=6;
    }
     else if (cal2=='F' || cal2=='f'){
        num2=5;
    }
    else if (cal2=='G' || cal2=='g'){
        num2=4;
    }
    else if (cal2=='H' || cal2=='h'){
        num2=3;
    }
    else if (cal2=='I' || cal2=='i'){
        num2=2;
    }
    else if (cal2=='J' || cal2=='j'){
        num2=1;
    }
    else if (cal2=='K' || cal2=='k'){
        num2=0;
    }
    else{
        printf("Ingresaste una calificacion que no esta dentro del rango\n");
        printf("Ingresa una calificacion valida entre A y K");
        exit (-1);
    }
    printf("Escribe la tercera calificacion en letra: ");
    scanf("%s", &cal3);

    if (cal3=='A' || cal3=='a')
    {
        num3=10;
    }
    else if (cal3=='B' || cal3=='b'){
        num3=9;
    }
     else if (cal3=='C' || cal3=='c'){
        num3=8;
    }
     else if (cal3=='D' || cal3=='d'){
        num3=7;
    }
     else if (cal3=='E' || cal3=='e'){
        num3=6;
    }
     else if (cal3=='F' || cal3=='f'){
        num3=5;
    }
    else if (cal3=='G' || cal3=='g'){
        num3=4;
    }
    else if (cal3=='H' || cal3=='h'){
        num3=3;
    }
    else if (cal3=='I' || cal3=='i'){
        num3=2;
    }
    else if (cal3=='J' || cal3=='j'){
        num3=1;
    }
    else if (cal3=='K' || cal3=='k'){
        num3=0;
    }
    else{
        printf("Ingresaste una calificacion que no esta dentro del rango\n");
        printf("Ingresa una calificacion valida entre A y K");
        exit (-1);

    }
    promedio =(num+num2+num3)/3;
    printf("promedio %.2f\n", promedio);

    if (promedio==10){
        printf("Tu promedio es A");
    }
    else if (promedio>8.9 && promedio<9.9){
        printf("Tu promedio es B");
    }
    else if (promedio>7.9 && promedio<8.9){
        printf("Tu promedio es C");
    }
     else if (promedio>6.9 && promedio<7.9){
        printf("Tu promedio es D");
    }
     else if (promedio>5.9 && promedio<6.9){
        printf("Tu promedio es E");
    }
     else if (promedio<5.9){
        printf("Estas reprobado");
    }
    return 0;
}
