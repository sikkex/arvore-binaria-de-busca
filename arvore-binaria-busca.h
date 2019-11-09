#include <stdio.h>
#include <stdlib.h>

typedef struct arvno ArvNo;
struct arvno {
    int info;
    ArvNo* esq;
    ArvNo* dir;
};

typedef struct arv Arv;
struct arv {
    ArvNo* raiz;
};

void abb_imprime (Arv* a);
ArvNo* abb_busca (Arv* a, int v);
Arv* abb_cria (void);
void abb_insere (Arv* a, int v);
void abb_retira (Arv* a, int v);