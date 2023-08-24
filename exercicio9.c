#include<stdio.h>
#include<math.h>

int main(){

int distribuidor = 28;
int imposto = 45;
float preco, custo, total;

printf("Qual o valor de fabrica: ");
scanf("%f", &preco);

custo = preco + (preco * distribuidor)/100;
total = custo + (custo * imposto)/100;

printf("\nO valor do carro sera: %.2f Reais", total);

}
