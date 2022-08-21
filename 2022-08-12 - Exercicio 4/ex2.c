#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check(char *dado, int tipo); // tipo 1 nome tipo 2 nota
int checkMaior(float notaAtual, float nota);

// Programa principal
int main(int argc, char *argv[])
{
    // Variaveis do processo principal
    char melhorAluno[20];
    float maiorNota = 0;
    int index, statusNome, statusNota;

    // testa quantidade de itens do ARGC
    // argc tem que ser maior que 2 (nomePrograma, nome aluno, nota aluno)
    if (argc > 2 && argc % 2 == 1)
    {
        // itera todos itens de argv
        for (index = 1; index < argc; index++)
        {
            // dados nas posicoes pares devem ser notas (primeira posicao é nome)
            if (index % 2 == 0)
            {
                // checa se a nota é um float: 1 = é float 0 = não é float
                statusNota = check(argv[index], 2);

                // Caso nome e nota tenham retornado 1 (ambos estao corretos), checa se o valor em questão
                // é maior que o valor salvo na variavel da maior nota
                if (statusNome && statusNota)
                {
                    // Se checkMaior retornar verdadero, substitui os valores de testes nas variaveis de maior nota e nome aluno
                    if (checkMaior(maiorNota, atof(argv[index])))
                    {
                        strcpy(melhorAluno, argv[index - 1]);
                        maiorNota = atof(argv[index]);
                        statusNome = 0;
                        statusNota = 0;
                    }
                }
                /*
                Caso o as variaveis no else if abaixo sejam 0 (falso) para o programa e imprime mensagem de falha
                pois ou o nome tem numero ou a nota tem letra e falhou nas funcoes de teste
                */
                else if (!statusNome || !statusNota)
                {
                    printf("\n\nFalha na verificacao! Confira os valores indicados\n\n");
                    return 0;
                }
            }
            // se o index for impar, confere o nome pois o nome fica nas posicoes impares
            else
            {
                statusNome = check(argv[index], 1);
            }
        }
    }
    else
    {
        /*
         Caso argc seja menor que 3 quer dizer que faltou informação nos parametros
         */
        printf("\nArgc tem menos parametros do que deveria!!!\n\n");
        return 0;
    }

    // imprime o melhor aluno
    printf("\n\nMelhor Aluno:\nNome: %s  Nota: %.2f\n\n", melhorAluno, maiorNota);

    return 0;
}

// checa se as variaveis em argv são verdadeiras dependendo dos seus tipos
// tipo 1 = Nome
// tipo 2 = Nota
int check(char *dado, int tipo)
{
    // Checa os tipos
    if (tipo == 2)
    {
        int index, countPonto = 0;
        // itera todos os caracteres do vetor
        for (index = 0; index < strlen(dado); index++)
            // testa se é numero ou letra ou caracteres especiais
            if (!isdigit(dado[index]))
                // caso seja diferente de um ponto, retorna um 0 para indicar um erro
                if (dado[index] != '.')
                    return 0;
                else
                {
                    // Caso contenha mais de 1 ponto trata como erro
                    /*
                    O ponto pode estar na primeira posição ou na ultima:
                    Exemplo:
                        .2 = 0.2
                        1. = 1.0
                    O dado não pode conter mais de um ponto em nenhuma localização, se conter é tratado como erro
                    */
                    countPonto++;
                    if (countPonto > 1)
                        return 0;
                }
        // Caso o teste de valor de certo, retorna 1
        return 1;
    }
    else if (tipo == 1)
    {
        int index;
        // Se houver numeros no nome, é retornado zero e tratado como erro
        for (index = 0; index < strlen(dado); index++)
            if (isdigit(dado[index]))
                return 0;
        // Caso o teste de nome de certo, retorna 1
        return 1;
    }
}

// Testa a variavel nota para ver se a atual é maior do que a salva 
int checkMaior(float notaAtual, float nota)
{
    if (nota > notaAtual)
        return 1;
    else
        return 0;
}