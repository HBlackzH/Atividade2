#include<stdio.h>
#include<math.h>

int main(){

    float salario, comissao, vendas, totalComissao, totalSalario;
    int total;

    printf("\nQual a base do salario do vendedor: ");
    scanf("%f",&salario);

    printf("\nQual o valor da comissao: ");
    scanf("%f",&comissao);

    printf("\nO total de carros vendidos: ");
    scanf("%d",&total);

    printf("\nQual o total de vendas: ");
    scanf("%f",&vendas);

    totalComissao = total * comissao;
    totalComissao = totalComissao + ( vendas * 5) /100;

    totalSalario = totalComissao + salario;

    printf("\nO salario total do vendedor: %.2f", totalSalario);

    }
