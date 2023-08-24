#include<stdio.h>
#include<math.h>

int main(){

	float raio, pi=3.14, area;

	printf("Qual o Raio: ");
	scanf("%f", &raio);

	area = pi * raio * raio;

	printf("AREA = %.2f m2 \n", area);

}
