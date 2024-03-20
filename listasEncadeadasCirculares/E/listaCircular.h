#define MAX 100

typedef struct aluno{
    int mat;
    char nome[30];
    float n1;
} Aluno;

typedef struct lista Lista;

Lista *criar();
void limpar(Lista *l);
int inserirInicio(Lista *l, struct aluno it);
int inserirFim(Lista *l, struct aluno it);
int inserirPosicao(Lista *l, struct aluno it, int pos);
int removerInicio(Lista *l);
int removerFim(Lista *l);
int removerPosicao(Lista *l, int pos);
int removerItem(Lista *l, int it);
int buscarItemChave(Lista *l, int chave, struct aluno *retorno);
int listaVazia(Lista *l);
int listaCheia(Lista *l);
int tamanho(Lista *l);
void mostrar(Lista *l);
int removeCentral(Lista *l);
Lista *intersecaoListas(Lista *l1, Lista *l2);
int contaOcorrencias(Lista *l, int chave);
int inserirFim2(Lista *l, struct aluno it);
