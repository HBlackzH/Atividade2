#include<stdio.h>
#include<math.h>

int main(){

int dias, meses, anos, diaTotais;

printf("Quantos anos vc tem : ");
scanf("%d", &anos);

printf("\nQuantos meses ja se passaram: ");
scanf("%d", &meses);

printf("\nQuantos dia ja se passaram: ");
scanf("%d", &dias);

diaTotais = (dias+(anos*365)+(meses*30));

printf("\nJa Se passaram um total de: %d Dias");

}
