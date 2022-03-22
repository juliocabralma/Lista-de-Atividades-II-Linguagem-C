//Segunda Questão

#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, num2, diferenca;
  
    printf ("Insira o numero 1: ");
    scanf ("%d", &num1);  
    printf("\n");

    printf ("Insira o numero 2: ");
    scanf ("%d", &num2);  
    printf("\n");

    if(num1>num2){
      diferenca = num1-num2;
      printf ("O numero %d eh o maior numero. A diferenca entre eles eh %d.", num1, diferenca);
    }
    else if(num2>num1){
      diferenca = num2-num1;
      printf ("O numero %d eh o maior numero. A diferenca entre eles eh %d.", num2, diferenca); 
    }
    else{
       printf ("O numero %d e o numero %d são iguais. Portanto a diferença entre eles eh 0.", num1, num2); 
    }
}
