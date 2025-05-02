#include <stdio.h>
int main(){
     //Cadastro
     int p1 = 800000 ,p2 = 600000, pt1 = 250, pt2 = 200; 
     float area1 = 4500, area2 = 5500,pib1 = 300000000, pib2 = 200000000 , d1, d2, pibper1, pibper2; 
     char pais1[20]= "Brasil";
     char pais2[20]= "Argentina";

    //Calcúlos
    d1 = p1 / area1, d2 = p2 / area2;
    pibper1 = pib1 / p1, pibper2 = pib2 / p2;
    
    //Comparação
    printf("### Super Trunfo ###\n");
    printf("O atributo é: População\n");
    if(p1 > p2){
        printf("### Comparando... ###\n");
        printf("Brasil: %d\n", p1);
        printf("Argentina: %d\n", p2);
        printf("Venceu Brasil!\n");
    } else if (p1 < p2){
        printf("Brasil: %d\n", p1);
        printf("Argentina: %d\n", p2);
        printf("Venceu Argentina!\n");
    } else {
        printf("Brasil: %d\n", p1);
        printf("Argentina: %d\n", p2);
        printf("Empate!\n");
    }
    return 0;

}