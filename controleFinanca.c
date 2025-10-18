/*
    Projeto: Controle financeiro
    Autor: Kelly Gadelha Brazao
    Data: 18/10/2025

    Projeto para ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA
*/

#include <stdio.h>

int main(){

    //Variaveis utilizadas
    double novoSalario, salario, gastos=0, lerGastos=0;
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
    while(lerGastos<salario){

        printf("Gasto numero %d: ", cont);
        scanf("%lf", &gastos);
        lerGastos+=gastos;
        cont++;
        if(gastos<salario){
            printf("Se deseja continuar digite 1, se deseja parar digite 0: ");
            scanf("%d", &stop);
        } else{
            break;
        }
        if (stop==0)
        {
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

        while(gastos<salario && stop!=0){

            printf("Gasto numero %d: ", cont);
            scanf("%lf", &gastos);
            cont++;
            if(lerGastos<salario){
                printf("Se deseja continuar digite 1, se deseja parar digite 0: ");
                scanf("%d", &stop);                
            } else{
                break;
            }
            lerGastos+=gastos;

        }
    }

    //calcula o salario final do usuario
    novoSalario=salario-lerGastos; 

    //Saida de informações
    if (salario<=0){
        printf("Seu salario não e suficiente para o mes\n");
        printf("Seu saldo: %.2f", novoSalario);
    } else{
        printf("Seu salario sera suficente para o mes");
        printf("Seu saldo: %.2f", novoSalario);
    }

    return 0;

}