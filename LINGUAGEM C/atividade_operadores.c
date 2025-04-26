// receber tres numeros;
// realizar as quatro operaçoes aritmeticas dos tres numeros;
// verificar se o primeiro numero é maior que o segundo, e se o 
// segundo é menor que o terceiro.
// se o primeiro numero for positivo e o segundo for par, exiba
// mensagem especifica.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

    // atribuindo variaveis numericas
    float num1, num2, num3, result = 0;

    // declarando string para 
    // selecionar operacao pois levantaria
    // exceção somente como char
    char operacao[13];
    
    // exibição e salvamento
    // de variaveis
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%f", &num2);

    printf("\nDigite o terceiro numero: ");
    scanf("%f", &num3);

    printf("\nDigite a operacao desejada: ");
    printf("\nsoma, subtracao, multiplicacao, divisao: ");
    scanf("%s", &operacao);


    // serie de condicionais para checar a 
    // operacao escolhida e entao
    // executar a aritmética.
    if (operacao == "soma")
    {   
        result = num1+num2+num3;
        printf("\n%.2f - %.2f - %.2f = %.2f", num1, num2, num3, result);
    }
    else if (operacao == "subtracao")   
    {
        result = num1 - num2 - num3;
        printf("\n%.2f - %.2f - %.2f = %.2f", num1, num2, num3, result);
    }

    else if (operacao == "multiplicacao")   
    {
        result = num1 * num2 * num3;
        printf("\n%.2f * %.2f * %.2f = %.2f", num1, num2, num3, result);
    }

    // se nenhuma das operações anteriores forem selecionadas
    // o que sobra é a divisão
    // por isso deixei implicita no else
    else;   
    {
        result = num1 / num2 / num3;
        printf("\n%.2f / %.2f / %.2f = %.2f", num1, num2, num3, result);
    }


    // condicional que analiza se num1 é maior que num2
    if (num1 > num2)
    {
        printf("\nO numero %.2f e maior que %.2f", num1, num2);
    }
    else
    printf("\nO numero %2.f nao e maior que %.2f", num1, num2);

    // mesma ideia da condicional anterior, porem
    // checa se num2 é menor que num3
    if (num2 < num3)
    {
        printf("\nO numero %2.f e menor que %.2f", num2, num3);
    }
    else
    printf("O numero %.2f nao e menor que %.2f", num2, num3);

    // condicional com operador lógico AND (&&)
    // que checa se num1 é positivo
    // e se num2 é par.
    if (num1 > 0 && (int)num2 % 2 == 0)
    {
        printf("\nO primeiro numero e positivo e o segundo e par");
    }
    else
    printf("\nO primeiro numero e negativo e o segundo e impar");
    
    return 0;
}
