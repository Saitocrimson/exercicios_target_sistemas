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
