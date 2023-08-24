#include<stdio.h>
#include<math.h>

int main(){

float salarioMensal, reajuste, novoSalario, soma;

  printf("Digite seu Salario: ");
  scanf("%f", &salarioMensal);

  printf("\nQual o percentual de reajuste: ");
  scanf("%f", &reajuste);

soma = (salarioMensal * reajuste)/100;
novoSalario = salarioMensal + soma;

printf("Seu novo salario e: %.2f  %", novoSalario);
}

