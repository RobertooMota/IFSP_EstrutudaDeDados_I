/*
Um menu com as seguintes opções
◼ Cadastrar novo aluno;
◼ Listar todos os alunos;
◼ Buscar aluno pelo RA;
◼ Exibir o aluno com a maior média;
◼ Exibir a média das médias;
◼ Excluir um aluno pelo RA;
◼ Sair
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// ****************** Definindo a estrutura ******************

typedef struct
{
    int RA;
    char nome[50];
    char curso[50];
    float notas[4];
    int anoInicio;
    int idade;
} Aluno;

//
// ****************** Prototipagem de funções ******************
void trataEscolha(int);
void cadastrarNovo();
void listarTodos();
void buscarAlunoRA();
void exibirMaiormedia();
void exibirMediaDasMedias();
void excluirAlunoRA();
int sairDoSistema();

Aluno resetStruct(Aluno, int);

// ****************** Função principal (main) ******************
int main(void)
{

    // Declarando o vetor de struct
    const int buffer = 40;
    Aluno alunos[buffer];
    // Resetando o vetor de estruturas
    int index;
    for (index = 0; index < buffer; index++)
        alunos[index] = resetStruct(alunos[index], index);

    int opcaoUsuario;
    int continuar = 1;

    while (continuar == 1)
    {
        printf("---------------------------\n");
        printf("1: Cadastrar novo aluno\n");
        printf("2: Listar todos os alunos \n");
        printf("3: Buscar aluno pelo RA \n");
        printf("4: Exibir o aluno com a maior média \n");
        printf("5: Exibir a média das médias \n");
        printf("6: Excluir um aluno pelo RA \n");
        printf("7: Sair\n");
        printf("---------------------------\n");
        printf("Sua opcao: ");
        scanf("%d", &opcaoUsuario);
        (opcaoUsuario == 7) ? continuar = sairDoSistema() : trataEscolha(opcaoUsuario);
    }
    return 0;
}

// ****************** Função que trata a escolha do usuario ******************
void trataEscolha(int escolha)
{
    switch (escolha)
    {
    case 1:
        void cadastrarNovo();
        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    case 5:

        break;
    case 6:

        break;

    case 7:
        sairDoSistema();
        break;

    default:
        break;
    }
}

Aluno resetStruct(Aluno estrutura, int index)
{

    estrutura.RA = -1;
    printf("INDEX: %d   RA: %d\n", index, estrutura.RA);
    return estrutura;
}

int sairDoSistema()
{
    printf("\nFinalizando atividades...\n\n");
}