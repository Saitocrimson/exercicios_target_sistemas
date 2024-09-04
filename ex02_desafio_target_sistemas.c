/* 2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/
#include <stdio.h>

int main(){
    int num=0;
    int i=0;
    int aux,cont;
    int a=1;
    int b=0;
    printf("Digite o numero: ");
    scanf("%d", &num);
    cont=num*2;
    for(i=0;i<cont;i++){
        aux=a+b;
        a=b;
        b=aux;
        if(aux>num){
            printf("O numero informado nao pertence a sequencia");
            break;
        }
        else if(aux==num){
             printf("O numero informado  pertence a sequencia");
             break;
        }
    }
    return 0;
}
