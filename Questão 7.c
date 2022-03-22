//Sétima Questão

#include <stdio.h>
#include <stdlib.h>

int main (){
    int codigo, quantidade;
    float precoFinal;
    
    printf("\n");
    printf ("----------- Cardapio -----------\n");
    printf("\n");
    printf ("Cachorro Quente | Codigo: 100 | Preco: 1.20\n");
    printf ("Bauru Simples | Codigo: 101 | Preco: 1.30\n");
    printf ("Bauru com Ovo | Codigo: 102 | Preco: 1.50\n");
    printf ("Hamburguer | Codigo: 103 | Preco: 1.20\n");
    printf ("Cheeseburguer | Codigo: 104 | Preco: 1.70\n");
    printf ("Suco | Codigo: 105 | Preco: 2.20\n");
    printf ("Refrigerante | Codigo: 106 | Preco: 1.00\n");
    printf("\n");

    printf ("Insira o Codigo do produto escolhido: ");
    scanf ("%d", &codigo);
    printf("\n");
    printf("\n");
  
    printf ("Insira a quantidade de pedidos desejados: ");
    scanf ("%d", &quantidade);
    printf("\n");
    printf("\n");

    if(codigo==100){
      precoFinal = 1.20*quantidade;
      printf ("%d Cachorro(s) Quente(s) deu %.2f reais.", quantidade, precoFinal);
    }
    else if(codigo==101){
      precoFinal = 1.30*quantidade;
      printf ("%d Bauru(s) Simples deu %.2f reais.", quantidade, precoFinal);
    }
    else if(codigo==102){
      precoFinal = 1.50*quantidade; 
      printf ("%d Bauru(s) com Ovo deu %.2f reais.", quantidade, precoFinal);
    }
    else if(codigo==103){
      precoFinal = 1.20*quantidade; 
      printf ("%d Hamburguer(s) deu %.2f reais.", quantidade, precoFinal);
    }
    else if(codigo==104){
      precoFinal = 1.70*quantidade;  
      printf ("%d Cheeseburguer(s) deu %.2f reais.", quantidade, precoFinal);
    }
    else if(codigo==105){
      precoFinal = 2.20*quantidade; 
      printf ("%d Suco(s) deu %.2f reais.", quantidade, precoFinal);
    }
    else if(codigo==106){
      precoFinal = quantidade; 
      printf ("%d Refrigerante(s) deu %.2f reais.", quantidade, precoFinal);
    }
    else{
      printf ("Codigo Invalido, tente outra vez!\n");
    }
}
