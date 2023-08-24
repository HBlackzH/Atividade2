#include<stdio.h>
#include<math.h>

int main(){

float merc, frete, desp, venda, custo, perc;

  printf("Digite o custo da mercadoria: ");
  scanf("%f", &merc);

  printf("\nDigite o valor do frete: ");
  scanf("%f", &frete);

  printf("\nDigite a despesas eventuais: ");
  scanf("%f", &desp);

  printf("\nQual sera o valor da venda: ");
  scanf("%f", &venda);

  custo = merc + frete + desp;

  perc = (venda - custo) * 100 / custo;

  printf("\nPercentagem de lucro da mercadoria: %.2f",preco);

}
