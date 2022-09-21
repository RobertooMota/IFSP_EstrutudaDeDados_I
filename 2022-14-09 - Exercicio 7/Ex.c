/*
Um menu com as seguintes opções
◼ Cadastrar novo aluno; ok
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
void listarTodos(Aluno *, int);
void buscarAlunoRA(Aluno *, int);
void exibirMaiormedia(Aluno *, int);
void exibirMediaDasMedias(Aluno *, int);
void excluirAlunoRA(Aluno *, int);
int sairDoSistema();

void resetStruct(Aluno *, int);
int localVago(Aluno *, int);
int duplicidade(Aluno *, int, int);

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
        printf("4: Exibir o aluno com a maior media \n");
        printf("5: Exibir a média das medias \n");
        printf("6: Excluir um aluno pelo RA \n");
        printf("7: Sair\n");
        printf("---------------------------\n");
        printf("Sua opcao: ");
        scanf("%d", &opcaoUsuario);
        (opcaoUsuario == 7) ? continuar = sairDoSistema() : trataEscolha(opcaoUsuario, &alunos, buffer);
        // Debug cadastro
        // printf("\n\nNome: %s\nRA: %d\nCurso: %s\nNotas: %f %f %f %f\n Ano: %d\nIdade: %d\n\n", alunos[0].nome, alunos[0].RA, alunos[0].curso, alunos[0].notas[0], alunos[0].notas[0], alunos[0].notas[2], alunos[0].notas[3], alunos[0].anoInicio, alunos[0].idade);
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
        break;
    case 2:
        listarTodos(vetor, buffer);
        break;
    case 3:
        buscarAlunoRA(vetor, buffer);
        break;
    case 4:
        exibirMaiormedia(vetor, buffer);
        break;
    case 5:
        exibirMediaDasMedias(vetor, buffer);
        break;
    case 6:
        excluirAlunoRA(vetor, buffer);
        break;
    case 7:
        sairDoSistema();
        break;
    }
}

void resetStruct(Aluno *vetor, int buffer)
{
    int index;
    for (index = 0; index < buffer; index++)
        vetor[index].RA = -1;
}

int sairDoSistema()
{
    printf("\nFinalizando atividades...\n\n");
}

// ------------------------------------------- CADASTRAR -----------------------------------------------------
void cadastrarNovo(Aluno *vetor, int buffer)
{

    int indexVago;
    indexVago = localVago(vetor, buffer);
    // printf("\nLocal vago: %d\n", indexVago);
    // printf("VALOR de CADASTRO: %d", vetor[0].RA);
    if (indexVago >= 0)
    {
        char nome[50], curso[50];
        int RA = 0;

        printf("Digite o RA: ");
        scanf("%d", &RA);
        fflush(stdin);
        if (!duplicidade(vetor, buffer, RA))
        {
            vetor[indexVago].RA = RA;
        }
        else
        {
            printf("\nEsse RA ja existe!\n\n");
            return;
        }

        printf("Digite o nome: ");
        gets(vetor[indexVago].nome);

        printf("Digite o curso: ");
        gets(vetor[indexVago].curso);

        printf("Digite o as notas separadas por espaco: ");
        scanf("%f %f %f %f", &vetor[indexVago].notas[0], &vetor[indexVago].notas[1], &vetor[indexVago].notas[2], &vetor[indexVago].notas[3]);

        printf("Digite o ano de inicio: ");
        scanf("%d", &vetor[indexVago].anoInicio);

        printf("Digite a idade: ");
        scanf("%d", &vetor[indexVago].idade);
    }
    else
    {
        printf("Nao ha espaco para cadastrar alunos!\n");
    }
}

int duplicidade(Aluno *vetor, int buffer, int RA)
{
    int index;
    for (index = 0; index < buffer; index++)
    {
        if (vetor[index].RA == RA)
            return 1;
    }
    return 0;
}

int localVago(Aluno *vetor, int buffer)
{
    int index;
    for (index = 0; index < buffer; index++)
    {
        printf("Index: %d   Valor RA: %d\n", index, vetor[index].RA);
        if (vetor[index].RA == -1)
            return index;
    }
    return -1;
}

// ------------------------------------------- LISTAR -----------------------------------------------------
void listarTodos(Aluno *vetor, int buffer)
{
    int index, contaAlunos = 0;
    for (index = 0; index < buffer; index++)
    {
        if (vetor[index].RA >= 0)
        {
            printf("RA:%d Nome: %s\n", vetor[index].RA, vetor[index].nome);
            contaAlunos++;
        }
    }
    if (!contaAlunos)
        printf("\nNenhum aluno cadastrado!\n\n");
}

// ------------------------------------------- Buscar aluno RA -----------------------------------------------------
void buscarAlunoRA(Aluno *vetor, int buffer)
{
    int RA, index;
    printf("Digite o RA do aluno: ");
    scanf("%d", &RA);
    printf("RA: %d\n", RA);

    for (index = 0; index < buffer; index++)
    {
        // printf("INPUT: %d PESQUISA: %d\n", RA, vetor[index].RA);
        if (RA == vetor[index].RA)
        {
            printf("\n\nNome: %s\nRA: %d\nCurso: %s\nNotas: %f %f %f %f\n Ano: %d\nIdade: %d\n\n", vetor[index].nome, vetor[index].RA, vetor[index].curso, vetor[index].notas[0], vetor[index].notas[0], vetor[index].notas[2], vetor[index].notas[3], vetor[index].anoInicio, vetor[index].idade);
            return;
        }
    }
    printf("Aluno nao encontrado!");
}

// ------------------------------------------- Maior media -----------------------------------------------------
float calcMedia(float nota0, float nota1, float nota2, float nota3)
{
}
void exibirMaiormedia(Aluno *vetor, int buffer)
{
    int indexMaiorMedia, index, indexMedia, status;
    float media, RAmedia = 0;

    for (index = 0; index < buffer; index++)
    {
        if (vetor[index].RA >= 0)
            for (indexMedia = 0; indexMedia < 4; indexMedia++)
            {
                media += vetor[index].notas[indexMedia];
                status = 1;
            }
        if (status)
        {
            media = media / 4;
            printf("Media Atual: %f", media);

            if (media > RAmedia)
            {
                indexMaiorMedia = index;
                RAmedia = media;
                printf("Index Media: %d MEDIA: %2f", indexMaiorMedia, RAmedia);
            }
            media = 0;
            status = 0;
        }
    }
    printf("\n---- MAIOR MEDIA ----\n");
    printf("\nRA: %d  Nome: %s  Media: %f\n", vetor[indexMaiorMedia].RA, vetor[indexMaiorMedia].nome, RAmedia);
}

// ------------------------------------------- Maior media -----------------------------------------------------
void exibirMediaDasMedias(Aluno *vetor, int buffer)
{
    int contAlunos = 0, index, indexMedia;
    float media;

    for (index = 0; index < buffer; index++)
    {
        if (vetor[index].RA >= 0)
        {
            for (indexMedia = 0; indexMedia < 4; indexMedia++)
            {
                media += vetor[index].notas[indexMedia];
            }

            contAlunos++;
        }
    }
    printf("Media: %.2f  Alunos: %d\n", media, contAlunos);
    printf("Media de todas as notas e: %.2f\n", media / (contAlunos * 4));
    contAlunos = 0;
    media = 0;
}

// ------------------------------------------- Excluir -----------------------------------------------------
void excluirAlunoRA(Aluno *vetor, int buffer)
{
    int RA = 0, index;
    printf("Digite o RA: ");
    scanf("%d", &RA);

    for (index = 0; index < buffer; index++)
    {
        if (vetor[index].RA >= 0 && vetor[index].RA == RA)
        {
            vetor[index].RA = -1;
            return;
        }
        else
            printf("Aluno nao encontrado!");
    }
}