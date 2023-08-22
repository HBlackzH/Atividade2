#include<stdio.h>
#include<math.h>

int main(){

  int mod, valorTotal;
  float merc, frete, desp, venda;

  printf("Digite o custo da mercadoria: ");
  scanf("%f", &merc);

  printf("\nDigite o valor do frete: ");
  scanf("%f", &frete);

  printf("\nDigite a despesas eventuais: ");
  scanf("%f", &desp);

  valorTotal = merc + frete + desp;

  printf("\nQual sera o valor da venda: ");
  scanf("%f", &venda);

 mod = valorTotal % venda;

printf("\nPercentagem de lucro da mercadoria: %d",mod);

}