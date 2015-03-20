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
    float AngulosHorizontaisEmDecimal[6];
    float grau, minuto, segundo;
    
    int i;
    for(i = 0; i < 6; i++)
    {
        printf("Entre com o grau do angulo %d: ", i); scanf("%f",&grau);
        printf("Entre com o minuto do angulo %d: ", i); scanf("%f",&minuto);
        printf("Entre com o segundo do angulo %d: ", i); scanf("%f",&segundo);
        
        AngulosHorizontaisEmDecimal[i] = ConverterSexagesimalEmDecimal(grau, minuto, segundo);
    }
    
    for(i = 0; i < 6; i++)
    {
        printf("%f\n",AngulosHorizontaisEmDecimal[i]);
    }
    
    return 0;
}
