#include <stdio.h>

 int main()
{
    char nome[50];
    int idade;
    printf("digite seu nome:");
    scanf("%s", &nome);
    printf("digite sua idade:");
    scanf("%d", &idade);
    
    if(idade >=18){
        printf("%s tem %d, pode ter carteira\n",nome, idade);
    }
    else{
        printf("%s tem %d, não pode ter carteira",nome, idade);
    }
    
    
    return 0;
}