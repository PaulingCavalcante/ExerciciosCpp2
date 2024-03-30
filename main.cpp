#include <stdio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

void ex1(), ex2(), ex3(), ex4(), ex5(), ex6(), ex7(), ex8(), ex9(), ex10(), ex11();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // ex1(), ex2(),
    // ex3(), ex4(),
    // ex5(),
    ex6(), ex7(), ex8(), ex9(), ex10(), ex11();
    // system("pause");
    return 0;
}

/*1? Faça um programa que recebe dois valores e apresente na tela a soma, a subtração e
multiplicação e a divisão desses dois valores.*/
void ex1()
{
    float num1, num2;

    printf("Exercício 1:\n");

    printf("Digite o 1º número: ");
    scanf("%f", &num1);
    printf("Digite o 2º número: ");
    scanf("%f", &num2);
    printf("Soma: %.2f\n Subtração: %.2f\n Multiplicação: %.2f\n Divisão: %.2f\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);
}

/*2 c2ex18) ? Escreva um programa que solicite ao usuário a altura e o raio de um
cilindro circular e imprima seu volume. Use a fórmula:
Volume de um cilindro = 3,141592 * raio * raio * altura*/
void ex2()
{
    float altura, raio;

    printf("\nExercício 2:\n");

    printf("Digite a altura do cilíndro: ");
    scanf("%f", &altura);
    printf("Digite a medida do raio da base do cilíndro: ");
    scanf("%f", &raio);
    printf("\n O volume do cilíndro é de: %.2fcm^3", altura * (pow(raio, 2) * M_PI));
}

/*3 ? Escreva um programa que receba uma medida em metros e retorne essa quantidade
em centímetros.*/
void ex3()
{
    float metros;

    printf("\nExercício 3:\n");

    printf("Digite uma medida em metros: ");
    scanf("%f", &metros);
    printf("Equivale a %.2f centímetros", metros * 100);
}

/*4 ? Escreva um programa que receba uma medida em centímetros e retorne essa
quantidade em metros.*/
void ex4()
{
    float centimetros;

    printf("\nExercício 4:\n");

    printf("Digite uma medida em centimetros: ");
    scanf("%f", &centimetros);
    printf("Equivale a %.2f metros", centimetros / 100);
}

/*5 ? Escreva um programa que receba 5 valores e retorne a média entre eles.*/
void ex5()
{
    int quantidadeNotas = 5;
    float numeros[quantidadeNotas], media = 0;

    printf("\nExercício 5:");

    for (int contador = 0; contador < quantidadeNotas; contador++)
    {
        printf("\nInsira o número %d° número: ", contador + 1);
        scanf("%f", &numeros[contador]);
        media += numeros[contador];
    }
    printf("\nA média dos números inseridos é de: %.2f", media / quantidadeNotas);
}

/*6 ? Escreva um programa que leia o preço de uma refeição e retorne o valor dos 10% da
conta.*/
void ex6()
{
    float preco, taxa;

    printf("\nExercício 6:");

    printf("\nDigite o preço da refeição: ");
    scanf("%f", &preco);
    taxa = preco * 0.10;
    printf("\n A taxa é de: R$%.2f\n Somando, o valor final é: R$%.2f", taxa, taxa + preco);
}

/*7 (c2ex22) ? Sabe-se que o latão é obtido por uma mistura de 7 partes de cobre e 3
partes de zinco, ou seja, 70% do peso de latão é formado por cobre e 30% de zinco.
Escreva um programa que receba o valor em kgs de quanto de latão deve ser produzido,
e o programa deve indicar quantos kgs de cobre e zinco serão necessários.*/
void ex7() {}

/*8 (c2ex23) ? Um trabalhador recebe R$ 100,00 por dia trabalhado. Ao receber, são
descontados 8% de impostos. Escreva um programa que receba o número de dias
trabalhados e informe o quanto deve ser pago ao trabalhador.*/
void ex8() {}

/*9 ? Sabe-se que o preço de um piso é de R$ 7,00 o m2 e que cada peça possui 0,25 m2.
Escreva um programa que receba uma área (em metros quadrados) e retorne quantas
peças serão necessárias e o valor total.*/
void ex9() {}

/*10 - Escrever um programa que lê a identificação de um vendedor (a identificação pode
ser um número inteiro qualquer), o seu salário fixo, o total das vendas por ele efetuadas
e o percentual que ganha sobre o total de vendas. O programa deve calcular o salário
total do vendedor e apresentar na tela a identificação do vendedor e o seu salário total.*/
void ex10() {}

/*11 - Escreva um programa que receba três números inteiros e positivos (A, B, C) e
calcule a seguinte expressão:
D = (R + S) / 2
Sendo R = (A + B)2 e S = (B + C) 2
.
Dica: para o cálculo do quadrado, neste momento, use x * x*/
void ex11() {}
