#include <stdio.h>

int main()
{
    // declaracao das variaveis que armazenarao os dados
    int dias;
    float anos;

    printf("Entre com o número de dias: ");
    scanf("%d", &dias); // %d = leitura de inteiro, &dias = armazena na variavel 'dias'
    // no caso de dois ou mais parametros, estes sao separados por virgula

    anos = (dias/365.25);
    printf("\n %d dias equivalem a %f anos. \n", dias, anos);
    // %d = mostra um inteiro na tela, %f mostra um float na tela
}
