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

/*1? Fa�a um programa que recebe dois valores e apresente na tela a soma, a subtra��o e
multiplica��o e a divis�o desses dois valores.*/
void ex1()
{
    float num1, num2;

    printf("Exerc�cio 1:\n");

    printf("Digite o 1� n�mero: ");
    scanf("%f", &num1);
    printf("Digite o 2� n�mero: ");
    scanf("%f", &num2);
    printf("Soma: %.2f\n Subtra��o: %.2f\n Multiplica��o: %.2f\n Divis�o: %.2f\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);
}

/*2 c2ex18) ? Escreva um programa que solicite ao usu�rio a altura e o raio de um
cilindro circular e imprima seu volume. Use a f�rmula:
Volume de um cilindro = 3,141592 * raio * raio * altura*/
void ex2()
{
    float altura, raio;

    printf("\nExerc�cio 2:\n");

    printf("Digite a altura do cil�ndro: ");
    scanf("%f", &altura);
    printf("Digite a medida do raio da base do cil�ndro: ");
    scanf("%f", &raio);
    printf("\n O volume do cil�ndro � de: %.2fcm^3", altura * (pow(raio, 2) * M_PI));
}

/*3 ? Escreva um programa que receba uma medida em metros e retorne essa quantidade
em cent�metros.*/
void ex3()
{
    float metros;

    printf("\nExerc�cio 3:\n");

    printf("Digite uma medida em metros: ");
    scanf("%f", &metros);
    printf("Equivale a %.2f cent�metros", metros * 100);
}

/*4 ? Escreva um programa que receba uma medida em cent�metros e retorne essa
quantidade em metros.*/
void ex4()
{
    float centimetros;

    printf("\nExerc�cio 4:\n");

    printf("Digite uma medida em centimetros: ");
    scanf("%f", &centimetros);
    printf("Equivale a %.2f metros", centimetros / 100);
}

/*5 ? Escreva um programa que receba 5 valores e retorne a m�dia entre eles.*/
void ex5()
{
    int quantidadeNotas = 5;
    float numeros[quantidadeNotas], media = 0;

    printf("\nExerc�cio 5:");

    for (int contador = 0; contador < quantidadeNotas; contador++)
    {
        printf("\nInsira o n�mero %d� n�mero: ", contador + 1);
        scanf("%f", &numeros[contador]);
        media += numeros[contador];
    }
    printf("\nA m�dia dos n�meros inseridos � de: %.2f", media / quantidadeNotas);
}

/*6 ? Escreva um programa que leia o pre�o de uma refei��o e retorne o valor dos 10% da
conta.*/
void ex6()
{
    float preco, taxa;

    printf("\nExerc�cio 6:");

    printf("\nDigite o pre�o da refei��o: ");
    scanf("%f", &preco);
    taxa = preco * 0.10;
    printf("\n A taxa � de: R$%.2f\n Somando, o valor final �: R$%.2f", taxa, taxa + preco);
}

/*7 (c2ex22) ? Sabe-se que o lat�o � obtido por uma mistura de 7 partes de cobre e 3
partes de zinco, ou seja, 70% do peso de lat�o � formado por cobre e 30% de zinco.
Escreva um programa que receba o valor em kgs de quanto de lat�o deve ser produzido,
e o programa deve indicar quantos kgs de cobre e zinco ser�o necess�rios.*/
void ex7() {}

/*8 (c2ex23) ? Um trabalhador recebe R$ 100,00 por dia trabalhado. Ao receber, s�o
descontados 8% de impostos. Escreva um programa que receba o n�mero de dias
trabalhados e informe o quanto deve ser pago ao trabalhador.*/
void ex8() {}

/*9 ? Sabe-se que o pre�o de um piso � de R$ 7,00 o m2 e que cada pe�a possui 0,25 m2.
Escreva um programa que receba uma �rea (em metros quadrados) e retorne quantas
pe�as ser�o necess�rias e o valor total.*/
void ex9() {}

/*10 - Escrever um programa que l� a identifica��o de um vendedor (a identifica��o pode
ser um n�mero inteiro qualquer), o seu sal�rio fixo, o total das vendas por ele efetuadas
e o percentual que ganha sobre o total de vendas. O programa deve calcular o sal�rio
total do vendedor e apresentar na tela a identifica��o do vendedor e o seu sal�rio total.*/
void ex10() {}

/*11 - Escreva um programa que receba tr�s n�meros inteiros e positivos (A, B, C) e
calcule a seguinte express�o:
D = (R + S) / 2
Sendo R = (A + B)2 e S = (B + C) 2
.
Dica: para o c�lculo do quadrado, neste momento, use x * x*/
void ex11() {}
