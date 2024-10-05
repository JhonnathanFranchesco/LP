#include <stdio.h>
#include <stdlib.h>

void main( ) { 
int x = 0; //criando uma variável inteira
printf ("valor de x: %dn" , x) ;
x++; //incremento x em 1 unidade
printf (valor de x: %d\n" ,x) ;
float y = 12.45678; //criando uma variável real
printf ("valor de y: %f\n" , y);
//imprimindo o valor de y com apenas 2 casas
printf ("valor de y:%.2f\n", y);
//1 caractere deve estar entre apóstrofo
char sexo = 'M'; //variável que aceita 1 caractere
printf("sexo: %c\n , sexo);
//criando uma variável string (texto)
char nome [30] = "Jonathan";
printf("Nome: %s\n", nome);
//imprimindo a primeira letra do nome
printf("Primeira Letra: %c\n, nome [0]);
printf("Olá Mundo!");
}