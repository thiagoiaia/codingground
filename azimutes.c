#include <stdio.h>


float ConverterSexagesimalEmDecimal(float grau, float min, float seg)
{
    //conversão de segundos em minutos, somados aos já minutos existentes.
    min = min + seg / 60;
    //Conversão de minutos em graus, somados aos já graus existentes.
    grau = grau + min / 60;

    return grau;
}

int main()
{
    float grau, minuto, segundo;
    printf("Entre com o grau da coordenada: "); scanf("%f",&grau);
    printf("Entre com o minuto da coordenada: "); scanf("%f",&minuto);
    printf("Entre com o segundo da coordenada: "); scanf("%f",&segundo);
    
    float resultado = ConverterSexagesimalEmDecimal(grau, minuto, segundo);

    printf("%f",resultado);
    
    return 0;
}
