void categoria (int age)
{
   
    if(age >= 5 && age <=7){
        printf("Infantil A");
    }else if(age >= 8 && age <= 10){
        printf("Infantil B");
    }else if(age >= 11 && age <= 13){
        printf("Juvenil A");
    }else if(age >= 14 && age <= 17){
        printf("Juvenil B");
    }else if(age >= 18){
        printf("Adulto");
    }else{
        printf("Idade invalida.");
    }

}