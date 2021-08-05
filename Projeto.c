//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M2LPBA
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Anderson Matte Tamborim
//******************************************************

#include <stdio.h>

// Função que valida se número da soma ou da 
// multiplicação é positivo ou negativo.
char * validarPositivoNegativo(int numero) {
    if(numero >= 0) {
      return "positivo";
    } else {
      return "negativo";
    }
}

int main() {
   
  int a;
  int entradas[4];
  int soma = 0;
  int multiplicacao = 1;

  //Laço de entrada de dados que verifica as entradas //digitadas pelo usuário. Só serão aceitas 5 entradas.
  for (int i = 0; i >= 0; i++){
      if(i < 5) {
          printf ("Digite um número: ");
          scanf ("%d", &a);
          entradas[i] = a;
      } else{
        break;
      }
  }

  //Calculo da soma dos valores do array de entradas.
  for(int i=0; i < 5; i++){
    soma = soma + entradas[i];
  }

  printf("\nA soma dos valores é: %d", soma);
  printf("\nO valor da soma é: %s", validarPositivoNegativo(soma));

  //Calculo da multiplicação dos valores do array de entradas.
  for(int i=0; i < 5; i++){
    multiplicacao = multiplicacao * entradas[i];
  }
  
  printf("\nA multiplicação dos valores é: %d", multiplicacao);
  printf("\nO valor da multiplicação é: %s", validarPositivoNegativo(soma));

  return 0;

}
