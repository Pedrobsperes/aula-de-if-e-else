#include <stdio.h>

int main()
{
    int idade;
    printf("digite o valor:");
    scanf("%d", &idade);
    if(idade==22){
        printf("igual a 12\n");
    }
    if(idade <=12){
        printf("menor ou igual a 12\n");
    }
    if(idade <12){
        printf("menor que 12\n");
    }

    return 0;
}
