/*
Aluno: Julio Cesar Silva Aprígio
Matricula: 20220002242

Enunciado da questão:

Um programador precisa desenvolver uma aplicacao em linguagem C para manipular
matrizes capazes de armazenar representacoes de modelos tridimensionais.
Entende-se que o tamanho da matriz e definido pelo usuário e esta deve ser alocada em tempo de
execucao. O processo de criar um modelo na matriz consiste em atribuir aos seus elementos os
valores inteiros “1” ou “0” para simbolizar que há ou nao parte do modelo naquela posicao. Uma
analogia para o modelo seria que a criacao funciona como no jogo ”Minecraft”, onde ”0”representaria
a ausencia de objeto e ”1”representaria a presenca de objetos.
Nesta aplicacao, as matrizes devem ser definidas como tipos de dados int. Isto posto, pede-se
que o programador prepare os algoritmos de alocacao dinamica para guardar os dados da matriz
tridimensional e crie um programa de testes para verificar se a sua implementacao foi realizada
corretamente de modo a garantir as seguintes condicoes:
a) O usuário do programa de testes deverá poder fornecer o tamanho da matriz tridimensional que
deseja manipular, inserindo as dimensoes da altura, largura e profundidade desta. O programa-
dor deverá inserir no seu codigo comentarios para indicar como as posicoes da matriz poderao
ser acessadas.
b) Para testar se a preparacao da matriz foi feita corretamente, implemente o preenchimento da
regiao central da matriz com ”1”s, no formato de um elipsoide cujo centro coincide com o centro
da matriz.
c) Uma vez criada a estrutura, o programa deve perguntar ao usuario que plano no eixo ”z” ele
deseja apresentar na tela, procedendo entao com a exibicao da matriz bidimensional corres-
pondente ao plano “z” escolhido pelo usuário. Por exemplo, para uma matriz definida com
dimensoes iguais a 5 × 5 × 5 elementos e raios do elipsóide iguais a 2 (maximo permitido para
essa matriz), a matriz apresentada para o plano z = 2 seria da forma
0 0 1 0 0
0 1 1 1 0
1 1 1 1 1
0 1 1 1 0
0 0 1 0 0

*/

#include<stdio.h>
#include<stdlib.h>

void exibe_matriz(unsigned int num);

unsigned int i; // Variavel auxiliar


int main(){
unsigned char *m; //Matriz M
	m = &LED;

	for(i = 0; i < 8; i++){//preenche de forma pseudo aleatorio a matriz
		m[i] = (rand()%100);
	}

    for(i = 0; i < 7; i++){//Imprime matriz no formato 8x8
		exibe_matriz(m[i]);
		printf("\n");
	}

}
void exibe_matriz(unsigned char num){//imprime a matriz
  unsigned char bit, aux;
  bit=128;
  for(aux=0; aux<8; aux++){
    if((num & bit) > 0){
      printf("1");
    }
    else{
      printf("0");
    }
    bit = bit>>1; //deslocando "bit" 1 bit para direita
  }
}