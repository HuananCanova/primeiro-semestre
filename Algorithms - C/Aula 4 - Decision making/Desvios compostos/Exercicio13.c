#include<stdio.h>

int main(){

   int hour, minute, seconds;

    printf("Inform the hour: ");
    scanf("%d", &hour);

    printf("Inform the minutes: ");
    scanf("%d", &minute);

    printf("Inform the seconds: ");
    scanf("%d", &seconds);

    if((hour >= 0 && hour <= 23) && (minute >=0 && minute <= 59) && (seconds >=0 && seconds <= 59)){
       printf("Horario valido");
    } else {
        printf("Horario invalido");
    }
    
    return 0;
}