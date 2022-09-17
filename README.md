
# Aula 7: Struct

Exercício proposto dia: 14-09-2022

## Struct:

A aula em questão trata do assunto **struct** (Estruturas)

**Primeiramente, o que é um struct?**

Como o próprio nome remete, struct é na sua essência uma simples estrutura, um tipo de variável que leva em si várias outras variáveis.

Uma comparação pode tornar isso mais simples:

```
int = variável de inteiros
float = variável de pontos flutuantes
char = variável de caracteres
struct = variável de atributos
```

Para quem já viu POO, vai ficar mais claro uma struct, uma vez que em POO trabalhamos com atributos de objetos também.

Para ilustrar, usaremos um carro como exemplo:
Um carro é um item final, mas dentro desse item existe N itens na sua composição.

Logo:

**Carro** = Variável

​	*Rodas* = atributo do carro

​	*Cor* = atributo do carro

​	*Ano* = atributo do carro

Da mesma forma iremos ver no código que nós *"criamos"* um tipo de variável chamada **Carro** e depois criamos a variável propriamente dita **"Gol"** que é do tipo **Carro**

### fluxo:

![Faceta](C:\Users\Roberto\Desktop\Faceta.jpg)

Para acessar ou inserir algum valor usamos a seguinte sintaxe:

`Gol.ATRIBUTO`



## Vetor de Struct:

Como qualquer outra variável, uma struct também pode ser um vetor.

No caso não entraremos em detalhes sobre typedef, mas é interessante entender esse fundamento, pois ele simplifica MUITO o trabalho com estruturas.

Para declarar um vetor de int usamos o código:

`int numeros[10];`

declaramos um vetor chamado **números** que contem **10** posições.

Logo, sabemos a sintaxe para se criar um vetor de um tipo.

**Tipo da variável** + *Nome da variável* + [<u>Quantidade de espaços necessários</u>]



Então aplicamos essa formula para criar um vetor de struct:

*(Levamos em consideração o struct Carro criado anteriormente)*

**Tipo da variável** = Carro

 *Nome da variável* = carros

 [<u>Quantidade de espaços necessários</u>] = 10

`Carro carros[10];`

Agora temos um vetor com 10 posições e em cada posição tem uma struct com todos os seus respectivos atributos.

### Fluxo:

![Faceta2](C:\Users\Roberto\Desktop\Faceta2.jpg)



Para acessar ou inserir algum valor usamos a seguinte sintaxe:

`carros[POSICAO DESEJADA].ATRIBUTO`
