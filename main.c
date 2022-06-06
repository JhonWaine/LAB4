#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "racional.h"


int main()
{
    int i=0;
    int a=0;
    P *gera_pto();
    int a1,a2,b1,b2;
    float d;
    P *P;

    while(i!=4){

        printf(" Menu:\n");
        printf(" digite 1, para cria uma instância de ponto e atribui os valores das coordenadas x e y:\n");
        printf(" digite 2, para operação que elimina um ponto criado:\n");
        printf(" digite 3, para calcula a distância entre dois pontos:\n");
        printf(" digite 4, para fechar o programa:\n");

        scanf("%d", &i);
        setbuf(stdin, NULL);
    
        
        switch (i){
            case 1:
                P = gera_pto();
            if(P == NULL){
                printf("Erro na alocacao dos pontos");
                break;
            }
            else{
                printf("Pontos criados!\n");
                break;
            }
            
            case 2:
                libera_pto(&P);
            if(P == 0){
                printf("Ponto liberado!\n");
                break;
            }
            
            case 3:
                printf("Informe as cordenadas para o primeiro ponto\n");
                scanf("%d %d", &a1, &a2);
                printf("Informe as cordenadas para o segundo ponto\n");
                scanf("%d %d", &b1, &b2);
                d = distancia_pto(a1,a2,b1,b2);
                printf("A distancia entre os pontos é de %1.f ", d);
                printf("\n");
                break;
        } 
    }  
   return 0;
}
