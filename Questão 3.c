//Terceira Questão

#include <stdio.h>
#include <stdlib.h>

int main (){
    float nota1, nota2, media;
  
    printf ("Insira a nota 1: ");
    scanf ("%f", &nota1);  
    printf("\n");

    printf ("Insira a nota 2: ");
    scanf ("%f", &nota2);  
    printf("\n");

    if(nota1>=0 && nota1<=10 && nota2>=0 && nota2<=10){
      media = (nota1+nota2)/2;
      printf("A media da nota %.2f e a nota %.2f eh: %.2f\n", nota1, nota2, media);
    }
    else{
      printf("Nota invalida, os valores devem estar entre 0 e 10, encerrando o programa!\n");
    }
}
