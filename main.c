#include "arvore-binaria-busca.h"

static void imprime (ArvNo* r, int tab)
{
    for (int i = 0; i < tab; i++) {
        printf("-");
    }
    if (r != NULL) {
        imprime(r->esq, tab + 2);
        printf("%d\n", r->info);
        imprime(r->dir, tab + 2);
    } else printf("vazio");
}
void abb_imprime (Arv* a)
{
    return imprime(a->raiz, 0);
}

static ArvNo* busca (ArvNo* r, int v)
{
    if (r == NULL) return NULL;
    else if (r->info > v) return busca(r->esq, v);
    else if (r->info < v) return busca(r->dir, v);
    else return r;
}
ArvNo* abb_busca (Arv* a, int v)
{
    return busca(a->raiz, v);
}

static ArvNo* insere (ArvNo* r, int v)
{
    if (r == NULL) {
        r = (ArvNo*)malloc(sizeof(ArvNo));
        r->info = v;
        r->esq = r->dir = NULL;
    }
    else if (v < r->info)
        r->esq = insere(r->esq, v);
    else    /* v < r->info */
        r->dir = insere(r->dir, v);
    return r;
}
void abb_insere (Arv* a, int v)
{
    a->raiz = insere(a->raiz, v);
}