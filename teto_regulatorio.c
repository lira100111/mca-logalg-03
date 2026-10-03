#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int banco_iniciar();

int main()
{    
    banco_iniciar();

    }

int banco_iniciar(){
    char banco_nome[20];
    int taxa_juros;
    int teto_reg = 13;
   // bool risco_critico = false;
    
    printf("Digite o nome do fundo de investimento: ");
    fgets(banco_nome,20,stdin);
    printf("\nDigite a taxa de juros oferecidos pelo CDB (%): ");
    scanf("%d",&taxa_juros);
    
    printf(" -- RELATORIO PRELIMINAR --");
    printf("\nFundo analisado: %s",banco_nome);
    printf("\nTaxa Oferecida: %d",taxa_juros);
    printf("\nTeto Regulatorio Permitido: %d", teto_reg);
    
    if ( taxa_juros > teto_reg ){
      //  risco_critico = true;
        printf("\n[ALERTA]: TAXA ACIMA DO VALOR PERMITIDO!");
        printf("\nParecer do auditor: Ativo bloqueado.");
        
    }
    
    else{
        printf("\nParecer do auditor: Ativo permitido");
    }
    
    
}