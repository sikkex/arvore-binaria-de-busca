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