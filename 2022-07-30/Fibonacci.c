#include <stdio.h>
#include <stdlib.h>
//Sequencia de fibonacci:
//1 1 2 3 5 8 13

//Prototipagem da função
void fibo(int,int);

//Função principal
int main(void)
{
    int termino;
    printf("Digite um valor para sequencia de Fibonacci: ");
    scanf("%d", &termino);
    fibo(1, termino);
    return 0;
}


void fibo(int inicial, int termino) //Função sem retorno
{
    int index,              //Index para laço for
     resultado = inicial,   //Resultado de somatoria
     aux,                   //Auxiliar para ultimo resultado
     lastNum = 0;           //Ultimo resultado

    //Laço for
    for(index=0; index <= termino-1; index++)
    {
        printf("%d ", resultado);           //Printa os resultados
        aux = resultado;                    //Armazena o resultado anterior
        resultado = resultado + lastNum;    //Soma  ultimo resultado com o valor atual
        lastNum = aux;                      //Atribui o valor de auxiliar para lastNum
    }
}

