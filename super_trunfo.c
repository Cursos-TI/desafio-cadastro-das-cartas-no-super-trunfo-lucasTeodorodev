#include <stdio.h>

int main(){
    float populacao,area ;
    float pib;
    char pais[20];
    int pontos_turisticos;
    int codigo_carta;
    
    printf("cadastre um pais: ");
    scanf("%s", &pais);

    printf("população: ");
    scanf("%f", &populacao);


    printf("área: ");
    scanf("%f", &area);

    printf("numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("pib: ");
    scanf("%f", &pib);

    printf("codigo da carta: %d \n",codigo_carta);
    printf("pais cadastrado: %s \n",pais);
    printf("população: %f \n", populacao);
    printf("PIB: %f \n", pib);
    printf("área: %f \n", area);
    printf("numero de pontos turisticos: %d", pontos_turisticos);

    return 0;

}