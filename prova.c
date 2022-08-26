#include <stdio.h>

int main () {
    int idade = 18;
    int *ponteiro_para_idade = &idade;
    printf("\n Conteudo do ponteiro: %p", ponteiro_para_idade);
}