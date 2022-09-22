/*
Aluno: Julio Cesar Silva Aprígio
Matricula: 20220002242

Enunciado da questão:

Um usuario precisa implementar o controle de uma matriz de leds com 8×8 elementos.
Para isso, ele criou um programa em C dotado de uma matriz da forma
unsigned char m[8][8];
para armazenar os estados dos leds. Como existem apenas dois estados possıveis para os leds (aceso
ou apagado), ele assumiu que leds acessos seriam denotados pelo inteiro ”1” nessa matriz e leds
apagados seriam denotados pelo inteiro ”0”.
Ocorre que a funcao que controla os leds exige que a informacao que controla a matriz seja enviada
via porta serial usando uma funcao que recebe um único inteiro nao sinalizado de 64 bits.
Nesse inteiro, os bytes mais significativos deverao guardar os estados das linhas superiores da matriz
de leds, enquanto os bytes menos significativos devem guardar os estados das linhas inferiores da
matriz (ou vice-versa, caso prefira). Assim, e necessário que cada estado previsto na matriz ”m” seja
codificado em um bit correspondente na variavel enviada pela funcao.
Crie um programa em linguagem C para realizar essa codificacao e explique na forma de comentarios
como sua codificacao da matriz ”m” na variável de 64 bits foi realizada.
*/


#include<stdio.h>
#include<stdlib.h>

void exibe_matriz(unsigned char num);

unsigned int i; // Variavel auxiliar

int main(){

  unsigned long long LED; //Variavel com 64bytes
  unsigned char *m; //Matriz M
	m = &LED;

	for(i = 0; i < 8; i++){//preenche de forma pseudo aleatorio a matriz
		m[i] = (rand()%100);
	}

	printf("devera exibir 8bytes: %d\n", sizeof(LED)); //Debug para verificar se a variavel tem 8bytes

	for(i = 0; i < 7; i++){//Imprime matriz no formato 8x8
		exibe_matriz(m[i]);
		printf("\n");
	}


   printf("\nValor inteiro = %llu\n", LED); //Mostra o valor inteiro com 64Bytes

  return 0;
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

