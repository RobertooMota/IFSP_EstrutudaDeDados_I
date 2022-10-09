// Importa as Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Apelida a variavel struct como "Carros", ou seja, quando digitarmos:
Carros carro;
Estamos declarando que Carros é o TIPO DA VARIAVEL (como int, float, char....)
e "carro" é o nome da variavel. 

EXEMPLO DE COMPRARAÇÃO
TIPO    --> NOME
int         numero;
float       media;
Carros      meuCarro;
*/
typedef struct
{
    char cor[15], nome[20];
    int aro,
        velMax,
        ano;
} Carros;

//Prototipo da funcao que irá printar a estrutura inteira
void printEstrutura(Carros);

int main(int argc, char *argv[])
{
    //Declaramos que a variavem carros será um VETOR
    //Exemplo:
    //int numeros[10]   --> Vetor do tipo int com 10 posições
    //char nome[20]     --> Vetor do tipo char com 20 posições
    //Carros carros     --> Vetor do tipo Carros com 5 posições
    Carros carros[5];

    /*
    Atribuição de valores para cada posição do vetor
    ***IMPORTANTE***
        Como o "struct" é uma variavel com diversos tipos de variaveis dentro e diversos valores, não é possivel definir algo do tipo:
            carros = 0;
        Logo, podemos chamar as variaveis de uma estrutura de CAMPOS INTERNOS ou ATRIBUTOS, assim torna mais simples o entendimento.
        E cada atributo tem que ser preenchido de forma individual.   
    */
    strcpy(carros[0].nome, "Gol");
    carros[0].ano = 2000;
    carros[0].aro = 18;
    strcpy(carros[0].cor, "Branco");
    carros[0].velMax = 200;

    strcpy(carros[1].nome, "Vectra");
    carros[1].ano = 1998;
    carros[1].aro = 20;
    strcpy(carros[1].cor, "Azul");
    carros[1].velMax = 300;

    strcpy(carros[2].nome, "Fusca");
    carros[2].ano = 1982;
    carros[2].aro = 14;
    strcpy(carros[2].cor, "Bege");
    carros[2].velMax = 90;

    //Le a escolha do usuario
    int escolha;
    printf("OPCAO: ");
    scanf("%d", &escolha);

    //Chama a funcao
    printEstrutura(carros[escolha]);

    return 0;
}

//Construcao da funcao
void printEstrutura(Carros carro)
{
    printf("Nome: %s\nAno: %d\nAro: %d\nCor: %s\nVelocidade Maxima: %d\n\n", carro.nome, carro.ano, carro.aro, carro.cor, carro.velMax);
}