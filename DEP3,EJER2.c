/Dep3_Prog2:basico/

#include <stdio.h>

int main()
{
    int hora, minutos, segundos;
    printf("\n introduce las horas");
    scanf("%d", &hora);
    printf("\n introduce los minutos");
    scanf("%d", &minutos);
    printf("\n introduce los segundos");
    scanf("%d", &segundos);
    
    if( (hora>=0 && hora<=23) &&
        (minutos>=0 && minutos<=59) &&
        (segundos>=0 && segundos<=59)
      )
    {
        printf("\n el fotmato de hora es correcto");
    }
    else
    {
        printf("\n el formato de hora es incorrecto");
    }
   return 0;
}