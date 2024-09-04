/*5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;*/
#include <stdio.h>
#include <string.h>

int main(){
    char palavra[1000];
    char palavra2[1000];
    int i,j;
    j=0;
    printf("Digite o palavra: ");
    scanf("%s", palavra);
    for(i=strlen(palavra)-1;i>=0;i--){
        palavra2[j]=palavra[i];
        j+=1;

    }
    palavra2[j] = '\0';
    printf("%s",palavra2);
    return 0;
}
