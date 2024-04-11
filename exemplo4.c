int main{
    int idade;
    char categoria;
    if(idade > 17){
        printf("Digite a categoria:");
        scanf("%c", &categoria);
    }
    if("categoria == 'A' "){
        printf("motorista dirige: moto e tricilco\n");
    }
    else{
        printf("%d nao pode ter carteira",idade);
    }
}