#include <stdio.h>

int main (int argc, char** argv){
    float salario, inss, ir, salario_liquido;

    printf("Digite seu salario bruto");
    scanf("%f", &salario);

    if(salario <= 1693.72){
        inss = salario * 0.08;

    } else if (salario <= 2822.90 ) {
        inss = salario * 0.09;
    }

    salario_liquido = (salario - inss);
    printf("\n Desconto Inss: %f\n", inss);
    printf("\n Salario liquido %2.f\n", salario_liquido);

    return 0;
}