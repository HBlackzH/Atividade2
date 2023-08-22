#include<stdio.h>
#include<math.h>

int main(){

  int num1, num2, soma, sub, mult;
  float div;

  printf("Digite o primero numero: ");
  scanf("%d", &num1);

  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  soma = num1 + num2;
  sub = num1 - num2;
  mult = num1 * num2;

  div = (float)num1 / (float)num2;

  printf("soma: %d",soma);
  printf("\nSubtracao: %d",sub);
  printf("\ndivisao: %.2f",div);
  printf("\nmultiplicacao: %d",mult);

}