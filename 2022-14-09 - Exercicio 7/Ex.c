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
void trataEscolha(int, Aluno *, int);
void cadastrarNovo(Aluno *, int);
void listarTodos();
void buscarAlunoRA();
void exibirMaiormedia();
void exibirMediaDasMedias();
void excluirAlunoRA();
int sairDoSistema();

void resetStruct(Aluno *, int);
int localVago(Aluno *, int);

// ****************** Função principal (main) ******************
int main(void)
{
    // Declarando o vetor de struct
    const int buffer = 40;
    Aluno alunos[buffer];
    // Resetando o vetor de estruturas
    resetStruct(&alunos, buffer);
    // int index;
    // for (index = 0; index < buffer; index++)
    //     printf("%d\n, ", alunos[index].RA);

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
        (opcaoUsuario == 7) ? continuar = sairDoSistema() : trataEscolha(opcaoUsuario, &alunos, buffer);
        printf("PASSOU while");
    }

    return 0;
}

// ****************** Função que trata a escolha do usuario ******************
void trataEscolha(int escolha, Aluno *vetor, int buffer)
{
    switch (escolha)
    {
    case 1:
        cadastrarNovo(vetor, buffer);
        printf("PASSOU switch");
        break;
        // case 2:

        //     break;
        // case 3:

        //     break;
        // case 4:

        //     break;
        // case 5:

        //     break;
        // case 6:

        //     break;

    case 7:
        printf("PASSOU case 7");
        sairDoSistema();
        break;
    }
    printf("siando trata escolha");
}

void resetStruct(Aluno *vetor, int buffer)
{
    int index;
    for (index = 0; index < buffer; index++)
        vetor[index].RA = -1;
    printf("PASSOU RESET");
}

int sairDoSistema()
{
    printf("\nFinalizando atividades...\n\n");
}

void cadastrarNovo(Aluno *vetor, int buffer)
{
    printf("ENTROU CADASTRO");
    int indexVago;
    indexVago = localVago(vetor, buffer);
    printf("\nLocal vago: %d\n", indexVago);
    // printf("VALOR de CADASTRO: %d", vetor[0].RA);
    if (indexVago >= -1)
    {
        char nome[50], curso[50];
        printf("Digite o RA: ");
        scanf("%d", &vetor[indexVago].RA);

        printf("Digite o nome: ");
        scanf("%s", &nome);
        strcpy(nome, vetor[indexVago].nome);

        printf("Digite o curso: ");
        scanf("%s", &curso);
        strcpy(curso, vetor[indexVago].curso);

        printf("Digite o as notas separadas por espaco: ");
        scanf("%f%f%f%f", &vetor[indexVago].notas[0], &vetor[indexVago].notas[1], &vetor[indexVago].notas[2], &vetor[indexVago].notas[3]);

        printf("Digite o ano de inicio: ");
        scanf("%d", &vetor[indexVago].anoInicio);

        printf("Digite a idade: ");
        scanf("%d", &vetor[indexVago].idade);
        printf("TERMINOU CADASTRO");
    }
    printf("SAINDO CADASTRO");
}

int localVago(Aluno *vetor, int buffer)
{
    int index;
    for (index = 0; index < buffer; index++)
    {
        printf("Index: %d   Local de teste: %d\n", index, vetor[index].RA);
        if (vetor[index].RA > 0)
            return index;
        else
            return -1;
    }
}