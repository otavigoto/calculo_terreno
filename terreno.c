#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>


int main(int argc, char** argv) {

	setlocale(LC_ALL, "Portuguese");

	float largura;
	float comprimento;
	float valorm2;

	printf("insira a largura do terreno:\n");
	scanf_s("%f", &largura);

	printf("insira o comprimento do terreno:\n");
	scanf_s("%f", &comprimento);

	printf("insira o valor por metro quadrado do terreno:\n");
	scanf_s("%f", &valorm2);

	system("cls");

	printf("Area do terreno: %.2f\n\n", largura * comprimento);
	printf("Preço do terreno: %.2f\n\n", (largura * comprimento) * valorm2);

}