#include "hash.h"

int flag = 0;

// Calcula a função de espalhamento
int funcao(int k, int tamanho, int i){
    return ((k+i)%tamanho);
}

// Cria a tabela hash
no_hash* Cria_Hash(int tamanho){
    no_hash *aux;
    int i;

   if((aux = (no_hash*)malloc(tamanho*sizeof(no_hash))) != NULL){
        for(i = 0; i < tamanho; i++)
           aux[i].state = 0;
        return aux;
   }
   else
        exit(0);
}

// Insere um elemento k na tabela T de tamanho m
void Insere_Hash(no_hash *T, int tamanho, int k){
    int j, i = 0;

    do{
        j = funcao(k, tamanho, i);
        if(T[j].state == 0 || T[j].state == 1){
            T[j].data = k;
            T[j].state = 2;
            printf("\n %d inserido com sucesso!", k);
            return;
        }
        else
            i++;
    }while(i < tamanho);
    if(i == tamanho)
        flag = 1;
    printf("\nTabela cheia! ");
}

int Busca_Hash(no_hash *T, int tamanho, int k, int i){
    int j;

    if(i < tamanho){
        j = funcao(k, tamanho, i);
        if(T[j].state == 0)
            return -1;
        else
            if(T[j].state == 1)
                return Busca_Hash(T, tamanho, k, i+1);
            else
                if(T[j].data == k)
                    return j;
                else
                    return Busca_Hash(T, tamanho, k, i+1);
    }
    return -1;
}

int Remove_Hash(no_hash *T, int tamanho, int k){
    int i;

    i = Busca_Hash(T, tamanho, k, 0);

    if(i == -1)
        return -1;
    else{
        T[i].state = 1;
        return 1;
    }
}

void imprimeHash(no_hash *T, int tamanho){
 int  i = 0;
 printf("\n********IMPRIMINDO TABELA********\n");
 for(i = 0; i < tamanho; i++){
  if(T[i].state == 2){
    printf("%d ", T[i].data);
  }
 }
   printf("\n**************\n");
}


