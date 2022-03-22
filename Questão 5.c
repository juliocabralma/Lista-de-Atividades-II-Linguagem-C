//Quinta Questão

#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcao;
    float  num1, num2, resultado;
  
    printf ("------- Menu de Operacoes -------\n");
    printf("\n");  
    printf ("Digite 1 para Adicao.\n");
    printf ("Digite 2 para Subtracao.\n");
    printf ("Digite 3 para Multiplicao.\n");
    printf ("Digite 4 para Divisao.\n");
    printf("\n");
    printf ("Insira a Opcao desejada: ");
    scanf ("%d", &opcao); 
    printf("\n");
    printf ("Insira o numero 1: ");
    scanf ("%f", &num1); 
    printf("\n");
    printf ("Insira o numero 2: ");
    scanf ("%f", &num2); 
    printf("\n");

    if(opcao==1){
      resultado = num1+num2;
      printf ("O resultado da Soma de %.2f e %.2f eh: %.2f", num1, num2, resultado);
    }
    else if(opcao==2){
      resultado = num1-num2;
      printf ("O resultado da Subtracao de %.2f e %.2f eh: %.2f", num1, num2, resultado);
    }
    else if(opcao==3){
      resultado = num1*num2;
      printf ("O resultado da Multiplicacao de %.2f e %.2f eh: %.2f", num1, num2, resultado);
    }
    else if(opcao==4){
      resultado = num1/num2;
      printf ("O resultado da Divisao de %.2f e %.2f eh: %.2f", num1, num2, resultado);
    }
    else{
      printf ("Opcao Invalida, tente outra vez!\n");  
    } 
}
