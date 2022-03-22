//Quarta Questão

#include <stdio.h>
#include <stdlib.h>

int main (){
    char sexo;
    float  altura, pesoIdeal;
  
    printf ("-------Menu de identificacao-------\n");
    printf ("Digite 'M' para Masculino e 'F' para Feminino.\n");
    printf("Insira o seu sexo: ");
    scanf ("%c", &sexo);  
    printf("\n");
    printf("\n");

    printf ("Insira a sua Altura em metros: ");  
    scanf ("%f", &altura); 
    printf("\n");
    printf("\n");

    if(sexo=='M'){
      pesoIdeal = (72.7*altura)-58;
      printf("Seu peso ideal eh: %.2f\n", pesoIdeal);
    }
    else if(sexo=='F'){
      pesoIdeal = (62.1*altura)-44.7;
      printf("Seu peso ideal eh: %.2f\n", pesoIdeal);
    }
    else{
      printf("Opcao de sexo invalida. Tente outra vez!\n");  
    }
    
}
