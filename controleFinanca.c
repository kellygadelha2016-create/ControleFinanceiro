/*
    Projeto: Controle financeiro
    Autor: Kelly Gadelha Brazao e Ewerton Vinicius
    Projeto para ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA
*/

#include <stdio.h>
#include "gastos.h"
//struct para expecificar cada gasto


int main(){

    //Variaveis utilizadas
    double novoSalario, salario, lerGastos=0;
    struct Gastos gastoAtual;
    int cont=1, stop;
        
    printf("----------------------\n");
    printf("Controle de gastos\n");
    printf("----------------------\n");

    //inputs 
    printf("Entre com o seu salario: R$");
    scanf("%lf", &salario);

    printf("-------------------------------------");
    printf("Digite seus gastos fixos");
    printf("-------------------------------------\n");

    //laço de repetição while, permite que o usuario insira varios valores de gastos enquanto o gasto for menor que salario
    while(lerGastos < salario){

        printf("Gasto numero %d: ", cont);
        scanf("%lf", &gastoAtual.valor);

        lerGastos+=gastoAtual.valor;
        cont++;

        stop = continuar();
        if (stop == 0){
            break;
        }

    }
    //stop recebe o valor 1 para que o laço de repetição abaixo funcione
    stop=1;

    //condição para executar o segundo laço caso necessario
    if (lerGastos<salario){

        printf("---------------------------------------------------------------\n");
        printf("Entre agora com possiveis gastos ou gastos referente a Lazer\n");
        printf("---------------------------------------------------------------\n");

        while(lerGastos <salario && stop!=0){

            printf("Gasto numero %d: ", cont);
            lerGasto(&gastoAtual);
            cont++;
            
            lerGastos += gastoAtual.valor;
            
            if(lerGastos<salario){
                stop = continuar();
            } else{
                break;
            }
        }
    }

    //calcula o salario final do usuario
    novoSalario=salario-lerGastos; 

    //Saida de informações
    if (salario <= 0){
        printf("Seu salario não e suficiente para o mes\n");
        printf("Seu saldo: %.2f", novoSalario);
    } else{
        printf("Seu salario sera suficente para o mes");
        printf("Seu saldo: %.2f", novoSalario);
    }

    return 0;
}