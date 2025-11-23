/*
    Projeto: Controle financeiro
    Autor: Kelly Gadelha Brazao e Ewerton Vinicius
    Projeto para ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA
*/

#include <stdio.h>
//struct para expecificar cada gasto
struct Gasto
{
    double valor;
};


int main(){

    //Variaveis utilizadas
    double novoSalario, salario, lerGastos=0;
    struct Gasto gastoAtual;
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
        scanf("%lf", &gastoAtual.valor);
        lerGastos+=gastoAtual.valor;
        cont++;
        if(gastoAtual.valor < salario){
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

        while(gastoAtual.valor <salario && stop!=0){

            printf("Gasto numero %d: ", cont);
            scanf("%lf", &gastoAtual.valor );
            cont++;
            if(lerGastos<salario){
                printf("Se deseja continuar digite 1, se deseja parar digite 0: ");
                scanf("%d", &stop);                
            } else{
                break;
            }
            lerGastos+=gastoAtual.valor;
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