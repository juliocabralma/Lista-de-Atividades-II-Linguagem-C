//Sexta Questão

#include <stdio.h>
#include <stdlib.h>

int main (){
    int idade, tempoServico;
    
  
    printf ("Insira a sua idade: ");
    scanf ("%d", &idade); 
    printf("\n");
    printf ("Insira o seu tempo de servico: ");
    scanf ("%d", &tempoServico); 
    printf("\n");

    if(idade>=65 || tempoServico>=30 || idade>=60 && tempoServico>=25){
      printf ("O Funcionario pode se Aposentar!\n");
    }
    else{
      printf ("O Funcionario nao pode se Aposentar!\n");
    }
}
