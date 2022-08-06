#include <stdlib.h>
#include <stdio.h>

// ****************** Prototipagem de funções ******************
void trataEscolha(int);
void ex01();
void ex02();
void ex03();
void ex04();

// ****************** Função principal (main) ******************
int main(void)
{
    int opcaoUsuario, continuar = 1;

    while (continuar)
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
        trataEscolha(opcaoUsuario);
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
        printf("Valor de entrada incorreto!");
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
    printf("\n");
}

void ex02()
{
}

void ex03()
{
}

void ex04()
{
}