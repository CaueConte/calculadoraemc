#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroa;
    int numerob;

    printf("Numero A: ");
    scanf("%d", &numeroa);

    printf("Numero B: ");
    scanf("%d", &numerob);

    printf("-------------------- \n");
    printf("Operacao \n");
    printf("1 - Soma \n");
    printf("2 - Subtracao \n");
    printf("3 - Multiplicacao \n");
    printf("4 - Divisao \n");
    printf("5 - Resto de divisao \n");
    printf("-------------------- \n");
    printf("Digite uma opcao: ");

    int soma = numeroa + numerob;
    int subtracao = numeroa - numerob;
    int multiplicacao = numeroa * numerob;
    int divisao = numeroa / numerob;
    int resto = numeroa % numerob;

    int opcao;
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("Resultado: %d", soma);
        break;

        case 2:
        printf("Resultado: %d", subtracao);
        break;

        case 3:
        printf("Resultado: %d", multiplicacao);
        break;

        case 4:
        printf("Resultado: %d", divisao);
        break;

        case 5:
        printf("Resultado: %d", resto);
        break;

    }
    return 0; 
}
