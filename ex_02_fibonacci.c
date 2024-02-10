#include <stdio.h>


int main(){
    int num=0;
    int i=0;
    int aux,b,a,cont;
    a=1;
    b=0;
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
