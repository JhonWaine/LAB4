#include "racional.h"
#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

struct p{
    int x1, x2, y1, y2;
    float d;
};

/*
operação:gera_pto
entrada:nenhuma
pré condição:nenhuma
processo:cria um ponto
saída: p
pós condição:ter criado um ponto
*/
P *gera_pto()
{
    P *p;
    p =(P*) malloc(sizeof(p));
return p;
}   

/*
operação:set_ponto
entrada: ponto
pré condição:nenhuma
processo: insere dois elementos no vetor
saída:retorna 1 caso sucesso, 0 caso contrário
pós condição: ter um vetor com dois elementos
*/
int set_pto(P *p, int a1,int a2,int b1,int b2){
    
    if (p == NULL)
        return 0;
    

    p -> A1 = a1;
    p -> A2 = a2;
    p -> B1 = b1;
    p -> B2 = b2;
    
    return 1;
}    

/*
operação:get_pto
entrada: o vetor p
pré condição: nenhuma
processo: imprime os valores do vetor
saída:retorna 0 caso sucesso, 1 caso contrário 
pós condição:imprime o valor do ponto
*/
int get_pto(P *p, int *a1,int *a2,int *b1,int *b2){
    if (p == NULL)
        return 0;
    
    *a1=p->A1;
    *a2=p->A2;
    *b1=p->B1;
    *b2=p->B2;
    return 1;
}

/*
operação: libera_pto
entrada: a variavel p
pré condição: nenhuma
processo: libera a posição do vetor
saída: sem saída por ser um void
pós condição: libera a posição da memoria do ponto
*/
void libera_pto(P **p){
    
    free(*p);   
        *p = NULL;
    
}

/*
operação:distancia_pto
entrada: a variavel p1 e a variavel p2
pré condição: nenhuma
processo: calcula a distancia entre os pontos
saída: d
pós condição: a variavel d rebeber a distancia entre os pontos
*/
float distancia_pto(int a1,int a2,int b1,int b2){
    float d = 0;
    
    if ((a1>a2) && (b1>b2))
     d = sqrt((pow(a1 - a2,2))+(pow(b1 - b2,2)));
    if ((a1<a2) && (b1<b2))
     d = sqrt((pow(a2 - a1,2))+(pow(b2  - b1,2)));
    if ((a1>a2) && (b1<b2))
     d = sqrt((pow(a2 - a1,2))+(pow(b2  - b1,2)));
    if ((a1<a2) && (b1>b2))
     d = sqrt((pow( a1-a2 ,2))+(pow(b1  - b2,2)));

    printf("%.1f",d);
    return d;
}

