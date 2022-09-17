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

// ****************** Prototipagem de funções ******************
void trataEscolha(int);
void cadastrarNovo();
void listarTodos();
void buscarAlunoRA();
void exibirMaiormedia();
void exibirMediaDasMedias();
void excluirAlunoRA();
int sairDoSistema();

// ****************** Função principal (main) ******************
int main(void)
{
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
    case 7:
        sairDoSistema();
        break;

    default:
        break;
    }
}

int sairDoSistema()
{
    printf("\nFinalizando atividades...\n\n");
}