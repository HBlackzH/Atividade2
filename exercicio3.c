#include<stdio.h>
#include<math.h>

int main(){

 int largura;
 int cumprimento;
 int mult;

   printf("Coloque a largura da sua Sala: ");
   scanf("%d", &largura);

   printf("Coloque o cumprimento da sua Sala: ");
   scanf("%d", &cumprimento);  

mult = largura * cumprimento;

   printf("\nA area da sua sala e: %d"" m",mult);
}