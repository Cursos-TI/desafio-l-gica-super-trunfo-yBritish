#include <stdio.h>
int main(){
     //Cadastro
     int p1 = 8000000 ,p2 = 6000000, pt1 = 250, pt2 = 200, opcao; 
     float area1 = 4500, area2 = 5500,pib1 = 300000000, pib2 = 200000000 , d1, d2; 
     char pais1[20]= "Brasil";
     char pais2[20]= "Argentina";

    //Calcúlos
    d1 = p1 / area1, d2 = p2 / area2;
    
    //Comparação
    printf("### Super Trunfo ###\n");
    printf("Qual atributo deseja comparar?\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. Pontos Turisticos\n");
    printf("4. Densidade Demográfica\n");
    printf("5. PIB\n");
    scanf("%d", &opcao);

    printf("### Comparando... ###\n");

    switch (opcao)
    {
    case 1:
    
    printf("%s / %s\n", pais1, pais2);
    printf("Atributo: População\n");
    printf("Brasil: %d \n", p1);
    printf("Argentina: %d\n", p2);
     if(p1 == p2){
        printf("Empate!\n");
     } else if(p1 > p2){
        printf("Carta 1 (Brasil): Venceu!\n");
     } else{
        printf("Carta 2 (Argentina): Venceu!\n");
     }
    break;

    case 2:
    printf("%s / %s\n", pais1, pais2);
    printf("Atributo: Area\n");
    printf("Brasil: %.2f \n", area1);
    printf("Argentina: %.2f\n", area2);
     if(area1 == area2){
        printf("Empate!\n");
     } else if(area1 > area2){
        printf("Carta 1 (Brasil): Venceu!\n");
     } else{
        printf("Carta 2 (Argentina): Venceu!\n");
     }
    break;

    case 3:
    printf("%s / %s\n", pais1, pais2);
    printf("Atributo: Pontos Turisticos\n");
    printf("Brasil: %d \n", pt1);
    printf("Argentina: %d \n", pt2);
     if(pt1 == pt2){
        printf("Empate!\n");
     } else if(pt1 > pt2){
        printf("Carta 1 (Brasil): Venceu!\n");
     } else{
        printf("Carta 2 (Argentina): Venceu!\n");
     }
    break;

    case 4:
    printf("%s / %s\n", pais1, pais2);
    printf("Atributo: Densidade Demografica\n");
    printf("Brasil: %.2f \n", d1);
    printf("Argentina: %.2f\n", d2);
     if(d1 == d2){
        printf("Empate!\n");
     } else if(d1 > d2){
        printf("Carta 1 (Brasil): Venceu!\n");
     } else{
        printf("Carta 2 (Argentina): Venceu!\n");
     }
    break;

    case 5:
    printf("%s / %s\n", pais1, pais2);
    printf("Atributo: PIB\n");
    printf("Brasil: %.2f dolares \n", pib1);
    printf("Argentina: %.2f dolares\n", pib2);
     if(pib1 == pib2){
        printf("Empate!\n");
     } else if(pib1 > pib2){
        printf("Carta 1 (Brasil): Venceu!\n");
     } else{
        printf("Carta 2 (Argentina): Venceu!\n");
     }
    break;

    default:
    printf("Opcao Invalida");
    break;
    }

    return 0;

}