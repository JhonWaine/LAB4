#ifndef RACIONAL_H_INCLUDED
#define RACIONAL_H_INCLUDED

typedef struct p P; 

P *gera_pto();
int set_pto(P *p, int a1,int a2,int b1,int b2);
int get_pto(P *p, int *a1,int *a2,int *b1,int *b2);
void libera_pto(P **p);
float distancia_pto(int a1,int a2,int b1,int b2);

#endif