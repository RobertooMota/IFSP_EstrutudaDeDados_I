#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// ****************** Prototipagem de funções ******************
int sairDoSistema();
void trataEscolha(int);
void ex01();
void ex02();
void ex03();
void ex04();

// ****************** Função principal (main) ******************
int main(void)
{
    int opcaoUsuario;
    int continuar = 1;

    while (continuar == 1)
    {
        printf("---------------------------\n");
        printf("1: Primos ate N\n");
        printf("2: Area do Quadrado \n");
        printf("3: Soma de 1 a N \n");
        printf("4: Multiplos de 5 \n");
        printf("5: Sair\n");
        printf("---------------------------\n");
        printf("Sua opcao: ");
        scanf("%d", &opcaoUsuario);
        (opcaoUsuario == 5) ? continuar = sairDoSistema() : trataEscolha(opcaoUsuario);
    }
    return 0;
}

// ****************** Função que trata a escolha do usuario ******************
void trataEscolha(int opcao)
{
    switch (opcao)
    {
    case 1:
        printf("Opcao %d selecionada!\n", opcao);
        ex01();
        break;
    case 2:
        printf("Opcao %d selecionada!\n", opcao);
        ex02();
        break;
    case 3:
        printf("Opcao %d selecionada!\n", opcao);
        ex03();
        break;
    case 4:
        printf("Opcao %d selecionada!\n", opcao);
        ex04();
        break;
    default:
        printf("\n\n\n\nValor de entrada incorreto!\n\n\n\n");
        sleep(3);
        break;
    }
}

// ****************** Exercicio 1 ******************
/*
Escreva uma função que recebe um inteiro
positivo N e escreve na tela todos os números
primos entre 0 e N.
*/
void ex01()
{
    int num, resultado;
    printf("Digite o valor alvo: ");
    scanf("%d", &num);
    if (num > 0)
    {
        int index, index_2;
        for (index = 0; index <= num; index++)
        {
            resultado = 0;
            for (index_2 = 2; index_2 <= index / 2; index_2++)
            {
                if (index % index_2 == 0)
                {
                    resultado++;
                }
            }
            if (resultado == 0)
                printf("%d ", index);
        }
    }
    else
    {
        printf("Somente permitido numeros positivos!\n");
    }

    printf("\n");
}

// ****************** Exercicio 2 ******************
/*
Escreva uma função que receba um dos lados
de um quadrado e retorne o valor de sua área.
*/
void ex02()
{
    int aresta;
    printf("Informe o tamanho da aresta do quadrado (mm): ");
    scanf("%d", &aresta);
    if (aresta > 0)
    {
        printf("A Area do seu quadrado e de:\n");
        printf("\n\n\n|   %d mm^2   |\n\n\n", aresta * aresta);
        sleep(4);
    }
    else
    {
        printf("Nao e possivel uma aresta ter medida zero!\n");
    }
}

// ****************** Exercicio 3 ******************
/*
Escreva uma função que receba um número
inteiro positivo N por parâmetro e retorne a
soma dos N primeiros inteiros positivos.
*/
int ex03_aux(int num)
{
    int resultado = 0, index;
    for (index = 0; index <= num; index++)
    {
        if (!(index % 2))
        {
            resultado += index;
        }
    }
    return resultado;
}

void ex03()
{
    int num;
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &num);
    (num > 0) ? printf("\n\n\nA soma dos numeros pares de 0 ate %d e de: %d\n\n\n\n\n", num, ex03_aux(num)) : printf("Somente permitido numeros positivos!\n");
    sleep(4);
}

// ****************** Exercicio 4 ******************
/*
Faça uma função que recebe um número N que, caso
seja positivo, calcule e exiba todos múltiplos de 5 entre
0 e N
*/
void ex04_aux(int num)
{
    if (num < 5)
    {
        printf("Nenhum numero multiplo de 5 entre 0 e %d", num);
    }
    else
    {
        int index;
        printf("\n\nMultiplos de 5: \n");
        for (index = 5; index < num; index++)
            if (index % 5 == 0)
                printf("%d ", index);
    }
    printf("\n\n\n");
    sleep(4);
}

void ex04()
{
    int num;
    printf("\n\nDigite um numero: ");
    scanf("%d", &num);
    (num > 0) ? ex04_aux(num) : printf("Permitido somente numeros positivos!\n");
}

// ****************** Sair do Sistema ******************
int sairDoSistema(void)
{
    printf("\n\n\n\n\nObrigado por usar nosso sistema!\n");
    printf("Saindo!\n\n\n\n");
    return 0;
}