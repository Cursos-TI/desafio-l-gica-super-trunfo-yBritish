#include <stdio.h>
#include <string.h>

int main(){
    //Cadastro
    int valor1, valor2, opcao, opcao2,resultado, resultado2,
     p1 = 8000000 ,p2 = 6000000, pt1 = 250, pt2 = 200;
    float area1 = 4500, area2 = 5500,pib1 = 300, pib2 = 200 , d1, d2, soma, soma2, carta1, carta2; 
    char pais1[20]= "Brasil", pais2[20]= "Argentina";
    char a[50], b[50];
    

    //Cálculo da densidade demográfica
    d1 = p1 / area1;
    d2 = p2 / area2;

    //Menu
    printf("##Super Trunfo##\n");
    printf("Escolha uma opção:\n");
    printf("1 - Densidade Demográfica\n");
    printf("2 - PIB\n");
    printf("3 - População\n");
    printf("4 - Área\n");
    printf("5 - Pontos Turistícos\n");
    scanf("%d", &opcao);

    //strcpy me ajuda a copiar o valor de uma string, ent todos os case vão ter ela para armazenar o atributo
    // e depois exibir o resultado
    switch (opcao)
    { case 1:
        resultado = d1 < d2 ? (d1) : (d2);
        strcpy(a, "Densidade Demográfica"); 
        carta1 = d1;
        carta2 = d2;
        
        break;
        case 2:
        resultado = pib1 > pib2 ? (pib1) : (pib2);
        strcpy(a, "PIB");
        carta1 = pib1;
        carta2 = pib2;

        break;
        case 3:
        resultado = p1 > p2 ? (p1) : (p2);
        strcpy(a, "População");
        carta1 = p1;
        carta2 = p2;
        
        break;
        case 4:
        resultado = area1 > area2 ? (area1) : (area2);
        strcpy(a, "Área");
        carta1 = area1;
        carta2 = area2;
        
        
        case 5:
        resultado = pt1 > pt2 ? (pt1) : (pt2);
        strcpy(a, "Pontos Turísticos");
        carta1 = pt1;
        carta2 = pt2;
        
        break;
    }
    // Armazenando o valor na variável soma para o cálculo do vencedor
    // e evitando que o valor da carta seja alterado na segunda escolha
    soma = carta1;
    soma2 = carta2;

    printf("Escolha mais um atributo:\n");
    scanf("%d", &opcao2);
    if(opcao == opcao2){
        printf("Escolha um atributo diferente!\n");
    } else{
        switch(opcao2){
            case 1:

                resultado2 = d1 < d2 ? (d1) : (d2);
                strcpy(b, "Densidade Demográfica");
                carta1 = d1;
                carta2 = d2;
                break;
            case 2:
                resultado2 = pib1 > pib2 ? (pib1) : (pib2);
                strcpy(b, "PIB");
                carta1 = pib1;
                carta2 = pib2;
                break;
            case 3:
                resultado2 = p1 > p2 ? (p1) : (p2);
                strcpy(b, "População");
                carta1 = p1;
                carta2 = p2;
                break;
                
            case 4:
                resultado2 = area1 > area2 ? (area1) : (area2);
                strcpy(b, "Área");
                carta1 = area1;
                carta2 = area2;
                break;
            case 5:
                resultado2 = pt1 > pt2 ? (pt1) : (pt2);
                strcpy(b, "Pontos Turísticos");
                carta1 = pt1;
                carta2 = pt2;
                break;

    }
    }
    // Exibir os resultados
    valor1 = soma + carta1;
    valor2 = soma2 + carta2;
    printf("Paises: %s e %s\n", pais1, pais2);
    printf("Atributos: %s e %s\n", a, b);
    printf("Valores da Carta 1(%s): %.2f e %.2f\n",pais1 ,soma,carta1);
    printf("Valores da Carta 2(%s): %.2f e %.2f\n",pais2 ,soma2,carta2);
    printf("A soma dos atributos da carta 1(%s) é: %d, e da carta 2(%s) :%d\n",pais1, valor1, pais2 ,valor2);
    
    // Verifica o vencedor
    if(valor1 > valor2){
        printf("Vencedor: %s\n", pais1);
    }else if(valor1 < valor2){
        printf("Vencedor: %s\n", pais2);
    }else{
        printf("Empate!\n");
    }
}
   