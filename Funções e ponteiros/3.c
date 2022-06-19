#include <stdio.h>
void converteTempo(int horas, char tipo);

int main(){
    int horas;
    char tipo;
    printf("Tempo em horas: ");
    scanf("%i%*c",&horas);
    printf("Transformar tempo para (h=horas,m=minutos,s=segundos): ");
    scanf("%c%*c",&tipo);
    converteTempo(horas,tipo);
    return 0;
}
void converteTempo(int horas, char tipo){
    int minutos,segundos;
    if(tipo=='h'){
        printf("Tempo em horas = %i",horas);
    }
    else if(tipo=='m'){
        minutos=horas*60;
        printf("Tempo em minutos = %i",minutos);
    }
    else if(tipo=='s'){
        segundos=horas*3600;
        printf("Tempo em segundos = %i",segundos);
    }
}