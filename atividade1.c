#include <stdio.h>

int main()
{
    float temperatura, umidade;
    unsigned int estoque;
    const float estoqueMinimo = 1000;

    printf("Entre com a temperatura: ");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: ");
    scanf("%f", &umidade);
    printf("Entre com o estoque: ");
    scanf("%u", &estoque);

    if (temperatura > 30.0)
    {
        printf("Temperatura acima do recomendado\n");
    }
    else
    {
        printf("Temperatura OK\n");
    }

    if (umidade > 50)
    {
        printf("Umidade acima do recomendado\n");
    }
    else
    {
        printf("Umidade OK\n");
    }

    if (estoque < estoqueMinimo)
    {
        printf("Estoque abaixo do recomendado\n");
    }
    else
    {
        printf("Estoque OK\n");
    }
}