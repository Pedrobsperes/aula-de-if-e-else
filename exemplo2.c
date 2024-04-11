#include <stdio.h>

int main()
{
    float salario, imposto;
    printf("digite o salario mensal em reais:");
    scanf("%d", &salario);
    
    if(salario <= 2259.2){
        imposto = 0;
    }
    if(salario > 2259.2){
        imposto = salario * 0.075;
    }
    if(salario >= 2259.22 &&salario <= 3751.05){
        imposto = salario * 0.15;
    }
    if(salario>=3751.06 &&salario <= 4664.68){
        imposto= salario * 0.225;
    }
    printf("o imposto de renda a ser pago mensalmente:R$ %2f\n", imposto);
    printf("o imposto de resnda a ser pago anualmente:R$ %2f\n", (imposto* 12));
    

    return 0;
}