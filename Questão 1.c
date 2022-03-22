//Segunda Lista de Atividades


//Primeira Questão


#include <stdio.h>
#include <stdlib.h>

int main (){
    float valorParcela, desconto, juros, gastoTotal;
    int opcao, quantParcelas;
  
    printf ("Insira o total de gastos: ");
    scanf ("%f", &gastoTotal);  
    printf("\n");

    printf ("-------Opcoes de Pagamento--------\n");
    printf ("Opcao de Pagamento 1 - a vista com 10% % de desconto\n");
    printf ("Opcao de Pagamento 2 - em duas vezes (preço da etiqueta)\n");
    printf ("Opcao de Pagamento 3 - de 3 até 10 vezes com 3% % de juros ao mês (somente para compras acima de R$ 100,00)\n");
    printf("\n");
    printf ("Insira a opcao de Pagamento: ");
    scanf ("%d", &opcao);  

    if(opcao==1){
      desconto = 0.1*gastoTotal;
      valorParcela = gastoTotal-desconto;
      printf("O valor %.2f saira a vista por %.2f", gastoTotal, valorParcela);   
    }
    else if(opcao==2){
      valorParcela = gastoTotal/2;
      printf("O valor %.2f sera pago em 2 parcelas de %.2f", gastoTotal, valorParcela);         
    }
    else if(opcao==3){
      if(gastoTotal>100){
        printf("Insira quantas vezes deseja parcelar(de 3 a 10 vezes):");        
        scanf ("%d", &quantParcelas);  
        if(quantParcelas>2 && quantParcelas<11){
          valorParcela = gastoTotal/quantParcelas;
          juros = 0.03*valorParcela;
          valorParcela = valorParcela+juros;
          printf("O valor de %.2f sera pago em %d parcelas de %.2f", gastoTotal, quantParcelas, valorParcela);
        }
        else{
          printf("Quantidade de parcelas incompativel com a opcao selecionada!\n");
        }
      }
      else{
        printf("Esta opcao so eh valida para compras acima de 100 reais, tente outra vez!\n");
      }
    }
    else{
      printf("Opcao Invalida!\n");
    }
}
